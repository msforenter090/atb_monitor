#include "remote_device.h"

atb::settings::remote_device::remote_device(QString &name, QHostAddress &ip_address,
                                            int port)
    : _name(name), _address(ip_address), _port(port) {
}

atb::settings::remote_device::remote_device(const atb::settings::remote_device &other)
    : _name(other._name), _address(other._address), _port(other._port) {
}

const QString &atb::settings::remote_device::name() const noexcept {
    return _name;
}

const QHostAddress &atb::settings::remote_device::address() const noexcept {
    return _address;
}

int atb::settings::remote_device::port() const noexcept {
    return _port;
}
