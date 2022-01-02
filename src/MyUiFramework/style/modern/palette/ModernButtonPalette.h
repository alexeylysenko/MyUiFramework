#pragma once

#include "style/palette/AbstractButtonPalette.h"

class ModernButtonPalette : public AbstractButtonPalette {
  Q_OBJECT
public:
  explicit ModernButtonPalette(QObject *parent = nullptr);

protected:
  QColor backgroundColorPrimary(bool enabled, bool pressed) const override;
  QColor backgroundColorSecondary(bool enabled, bool pressed) const override;
  QColor textColorPrimary(bool enabled, bool pressed) const override;
  QColor textColorSecondary(bool enabled, bool pressed) const override;
  QColor borderColorPrimary(bool enabled, bool pressed) const override;
  QColor borderColorSecondary(bool enabled, bool pressed) const override;
};
