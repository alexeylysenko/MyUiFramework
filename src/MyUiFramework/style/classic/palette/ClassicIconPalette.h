#pragma once

#include "style/palette/AbstractIconPalette.h"

class ClassicIconPalette : public AbstractIconPalette {
  Q_OBJECT
public:
  explicit ClassicIconPalette(QObject *parent = nullptr);

  QColor color() const override;
};
