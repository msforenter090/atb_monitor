#include "config.h"

atb::settings::config::config() : _remote_devices() {
}

atb::settings::config::~config() {
    for(remote_device* device : _remote_devices)
        delete device;

    _remote_devices.clear();
}

int atb::settings::config::count() const noexcept {
    return _remote_devices.size();
}

const atb::settings::remote_device* const atb::settings::config::at(int index) const noexcept {
    return _remote_devices.at(index);
}
