#include "config_loader.h"

// -----------------------------------------------------------------------------
// std
// -----------------------------------------------------------------------------
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

bool atb::settings::config_loader::load(QString &file, atb::settings::config &configuration) const noexcept{
    QFile json_file(file);
    json_file.open(QFile::ReadOnly);

    QByteArray json_byte = json_file.readAll();
    json_file.close();

    QJsonDocument json_document = QJsonDocument().fromJson(json_byte);
    if(json_document.isNull())
        return false;

    if(!json_document.isObject())
        return false;

    QJsonArray remote_devices_array = json_document.object().value("remote").toArray(QJsonArray());

    QVector<atb::settings::remote_device*> remote_devices_config;
    for(QJsonArray::iterator it = remote_devices_array.begin();
        it != remote_devices_array.end(); it ++) {
        QJsonValueRef device = *it;
        if(!device.isObject())
            continue;

        QJsonObject device_object = device.toObject();
        QString name = device_object.value("name").toString();
        QString ip = device_object.value("ip").toString();

        QHostAddress host_address(ip);
        int port = device_object.value("port").toInt();

        remote_devices_config.append(new atb::settings::remote_device(name, host_address, port));
    }

    configuration._remote_devices = remote_devices_config;
    return true;
}

bool atb::settings::config_loader::save(QString &file, atb::settings::config &configuration) const noexcept {
    return false;
}
