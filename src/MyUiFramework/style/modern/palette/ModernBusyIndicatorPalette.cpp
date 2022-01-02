#include "ModernBusyIndicatorPalette.h"

#include "ModernStyleColors.h"

/*!
 * \brief A modern style palette for a BusyIndicator control.
 * \class ModernBusyIndicatorPalette
 */

/*!
 * \brief A default QObject-based constructor.
 * \param parent
 */
ModernBusyIndicatorPalette::ModernBusyIndicatorPalette(QObject *parent)
    : AbstractBusyIndicatorPalette{parent} {}

/*!
 * \brief Returns a start color that is used to draw a BusyIndicator control.
 * \return
 */
QColor ModernBusyIndicatorPalette::startColor() const {
  return colors::Violet10;
}

/*!
 * \brief Returns an end color that is used to draw a BusyIndicator control.
 * \return
 */
QColor ModernBusyIndicatorPalette::endColor() const { return colors::Violet1; }
