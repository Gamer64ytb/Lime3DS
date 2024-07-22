// Copyright Citra Emulator Project / Lime3DS Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <QDockWidget>

class LLEServiceModulesWidget : public QDockWidget {
    Q_OBJECT

public:
    explicit LLEServiceModulesWidget(QWidget* parent = nullptr);
    ~LLEServiceModulesWidget();
};
