#pragma once

#include "config.h"

// -----------------------------------------------------------------------------
// std
// -----------------------------------------------------------------------------
#include <QString>

namespace atb {
namespace settings {

class config_loader {
public:

    // -------------------------------------------------------------------------
    // loads config file into memory
    // -------------------------------------------------------------------------
    bool load(QString& file, atb::settings::config& configuration) const noexcept;

    // -------------------------------------------------------------------------
    // store configuration into file
    // -------------------------------------------------------------------------
    bool save(QString& file, atb::settings::config& configuration) const noexcept;
};
}   // setting
}   // atb
