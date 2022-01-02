#include "ModernIconPalette.h"

#include "ModernStyleColors.h"

/*!
 * \brief A modern style palette for an Icon control.
 * \class ModernIconPalette
 */

/*!
 * \brief A default QObject-based constructor.
 * \param parent
 */
ModernIconPalette::ModernIconPalette(QObject *parent)
    : AbstractIconPalette{parent} {}

/*!
 * \brief Returns a color that is used to draw an Icon control.
 * \return
 */
QColor ModernIconPalette::color() const { return colors::Violet7; }
