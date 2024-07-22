// Copyright Citra Emulator Project / Lime3DS Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <string>

namespace NetSettings {

struct Values {
    // WebService
    std::string web_api_url;
    std::string citra_username;
    std::string citra_token;
} extern values;

} // namespace NetSettings
