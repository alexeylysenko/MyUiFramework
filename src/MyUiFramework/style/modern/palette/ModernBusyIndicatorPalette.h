#pragma once

#include "style/palette/AbstractBusyIndicatorPalette.h"

class ModernBusyIndicatorPalette : public AbstractBusyIndicatorPalette {
  Q_OBJECT
public:
  explicit ModernBusyIndicatorPalette(QObject *parent = nullptr);

  QColor startColor() const override;
  QColor endColor() const override;
};
