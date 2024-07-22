// Copyright Citra Emulator Project / Lime3DS Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

namespace Frontend {
/**
 * Registers default, frontend-independent applet implementations.
 * Will be replaced later if any frontend-specific implementation is available.
 */
void RegisterDefaultApplets(Core::System& system);
} // namespace Frontend
