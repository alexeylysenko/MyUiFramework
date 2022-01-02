#include "ClassicBusyIndicatorPalette.h"

#include "ClassicStyleColors.h"

/*!
 * \brief A classic style palette for a BusyIndicator control.
 * \class ClassicBusyIndicatorPalette
 */

/*!
 * \brief A default QObject-based constructor.
 * \param parent
 */
ClassicBusyIndicatorPalette::ClassicBusyIndicatorPalette(QObject *parent)
    : AbstractBusyIndicatorPalette{parent} {}

/*!
 * \brief Returns a start color that is used to draw a BusyIndicator control.
 * \return
 */
QColor ClassicBusyIndicatorPalette::startColor() const { return colors::Black; }

/*!
 * \brief Returns an end color that is used to draw a BusyIndicator control.
 * \return
 */
QColor ClassicBusyIndicatorPalette::endColor() const { return colors::White; }
