#pragma once

#include "palette/ClassicBusyIndicatorPalette.h"
#include "palette/ClassicButtonPalette.h"
#include "palette/ClassicIconPalette.h"
#include "style/MyAbstractStyle.h"

#include "MyUiFramework_global.h"

/*!
 * \brief A predefined classic controls style.
 * \class MyClassicStyle
 */

class MYUIFRAMEWORK_EXPORT MyClassicStyle : public MyAbstractStyle {
  Q_OBJECT
public:
  /*!
   * \brief A classic style constructor.
   * \param parent
   */
  explicit MyClassicStyle(QObject *parent = nullptr) : MyAbstractStyle{parent} {
    m_buttonPalette = std::make_unique<ClassicButtonPalette>();
    m_busyIndicatorPalette = std::make_unique<ClassicBusyIndicatorPalette>();
    m_iconPalette = std::make_unique<ClassicIconPalette>();
  }
};
