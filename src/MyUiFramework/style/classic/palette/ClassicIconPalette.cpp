#include "ClassicIconPalette.h"

#include "ClassicStyleColors.h"

/*!
 * \brief A classic style palette for an Icon control.
 * \class ClassicIconPalette
 */

/*!
 * \brief A default QObject-based constructor.
 * \param parent
 */
ClassicIconPalette::ClassicIconPalette(QObject *parent)
    : AbstractIconPalette{parent} {}

/*!
 * \brief Returns a color that is used to draw an Icon control.
 * \return
 */
QColor ClassicIconPalette::color() const { return colors::Gray88; }
