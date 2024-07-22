// Copyright Citra Emulator Project / Lime3DS Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <span>
#include "common/common_types.h"

namespace Common {

void FlipRGBA8Texture(std::span<u8> tex, u32 width, u32 height);

} // namespace Common
