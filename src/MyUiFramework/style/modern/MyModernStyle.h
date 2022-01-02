#pragma once

#include "palette/ModernBusyIndicatorPalette.h"
#include "palette/ModernButtonPalette.h"
#include "palette/ModernIconPalette.h"
#include "style/MyAbstractStyle.h"

#include "MyUiFramework_global.h"

/*!
 * \brief A predefined modern controls style.
 * \class MyModernStyle
 */

class MYUIFRAMEWORK_EXPORT MyModernStyle : public MyAbstractStyle {
  Q_OBJECT
public:
  /*!
   * \brief A modern style constructor.
   * \param parent
   */
  explicit MyModernStyle(QObject *parent = nullptr) : MyAbstractStyle{parent} {
    m_buttonPalette = std::make_unique<ModernButtonPalette>();
    m_busyIndicatorPalette = std::make_unique<ModernBusyIndicatorPalette>();
    m_iconPalette = std::make_unique<ModernIconPalette>();
  }
};
