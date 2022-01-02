#pragma once

#include "style/palette/AbstractBusyIndicatorPalette.h"

class ClassicBusyIndicatorPalette : public AbstractBusyIndicatorPalette {
  Q_OBJECT
public:
  explicit ClassicBusyIndicatorPalette(QObject *parent = nullptr);

  QColor startColor() const override;
  QColor endColor() const override;
};
