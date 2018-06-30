#pragma once

// -----------------------------------------------------------------------------
// std
// -----------------------------------------------------------------------------
#include<QString>
#include<QHostAddress>

namespace atb {
namespace settings {

// -----------------------------------------------------------------------------
// remote device as part of the config file
// -----------------------------------------------------------------------------
class remote_device {
private:
    QString         _name;
    QHostAddress    _address;
    int             _port;

public:
    remote_device(QString &name, QHostAddress &ip_address, int port);

    remote_device(const remote_device &other);

    const QString& name() const noexcept;

    const QHostAddress& address() const noexcept;

    int port() const noexcept;
};
} // END of atb NAMESPACE
} // END of settings NAMESPACE
