#pragma once

// -----------------------------------------------------------------------------
// std
// -----------------------------------------------------------------------------
#include <QVector>

// -----------------------------------------------------------------------------
// custom
// -----------------------------------------------------------------------------
#include "remote_device.h"

namespace atb {
namespace settings {
class config {
private:
    QVector<remote_device*> _remote_devices;

public:
    config();

    ~config();

    int count() const noexcept;

    const remote_device* const at(int index) const noexcept;

    // -------------------------------------------------------------------------
    // friend declaration
    // -------------------------------------------------------------------------
    friend class config_loader;
};
}
}
