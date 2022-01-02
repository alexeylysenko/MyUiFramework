#pragma once

#include <QObject>

#include <memory>

#include "palette/AbstractBusyIndicatorPalette.h"
#include "palette/AbstractButtonPalette.h"
#include "palette/AbstractIconPalette.h"

/*!
 * \brief An abstract style class that has to be a base class for all custom
 * styles.
 * \class MyAbstractStyle
 */

class MyAbstractStyle : public QObject {
  Q_OBJECT
  Q_PROPERTY(AbstractButtonPalette *buttonPalette READ buttonPalette CONSTANT)
  Q_PROPERTY(AbstractBusyIndicatorPalette *busyIndicatorPalette READ
                 busyIndicatorPalette CONSTANT)
  Q_PROPERTY(AbstractIconPalette *iconPalette READ iconPalette CONSTANT)

public:
  /*!
   * \brief A default QObject-based constructor.
   * \param parent
   */
  explicit MyAbstractStyle(QObject *parent = nullptr) : QObject{parent} {}

  /*!
  * \brief Returns a palette that is used for any Button control.
  * \return
  */
  AbstractButtonPalette *buttonPalette() const { return m_buttonPalette.get(); }

  /*!
   * \brief Returns a palette that is used for any BusyIndicator control.
   * \return
   */
  AbstractBusyIndicatorPalette *busyIndicatorPalette() const {
    return m_busyIndicatorPalette.get();
  }

  /*!
   * \brief Returns a palette that is used for any Icon control.
   * \return
   */
  AbstractIconPalette *iconPalette() const { return m_iconPalette.get(); }

protected:
  std::unique_ptr<AbstractButtonPalette> m_buttonPalette;
  std::unique_ptr<AbstractBusyIndicatorPalette> m_busyIndicatorPalette;
  std::unique_ptr<AbstractIconPalette> m_iconPalette;
};
