#pragma once

#include "style/palette/AbstractIconPalette.h"

class ModernIconPalette : public AbstractIconPalette {
  Q_OBJECT
public:
  explicit ModernIconPalette(QObject *parent = nullptr);

  QColor color() const override;
};
