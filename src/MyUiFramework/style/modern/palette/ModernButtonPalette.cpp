#include "ModernButtonPalette.h"

#include "ModernStyleColors.h"

/*!
 * \brief A modern style palette for a Button control.
 * \class ModernButtonPalette
 */

/*!
 * \brief A default QObject-based constructor.
 * \param parent
 */
ModernButtonPalette::ModernButtonPalette(QObject *parent)
    : AbstractButtonPalette{parent} {}

/*!
 * \brief Returns a background color for a primary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ModernButtonPalette::backgroundColorPrimary(bool enabled,
                                                   bool pressed) const {
  return enabled ? (pressed ? colors::Violet9 : colors::Violet7)
                 : colors::Violet1;
}

/*!
 * \brief Returns a background color for a secondary button based on enabled
 * or disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ModernButtonPalette::backgroundColorSecondary(bool enabled,
                                                     bool pressed) const {
  return enabled
             ? (pressed ? QColor{0xf0, 0xf0, 0xf0} : QColor{0xff, 0xff, 0xff})
             : QColor{0xe4, 0xe4, 0xe4};
}

/*!
 * \brief Returns a text color for a primary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ModernButtonPalette::textColorPrimary(bool enabled, bool pressed) const {
  return enabled
             ? (pressed ? QColor{0xf0, 0xf0, 0xf0} : QColor{0xff, 0xff, 0xff})
             : QColor{0xe4, 0xe4, 0xe4};
}

/*!
 * \brief Returns a text color for a secondary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ModernButtonPalette::textColorSecondary(bool enabled,
                                               bool pressed) const {
  return enabled ? (pressed ? colors::Violet9 : colors::Violet7)
                 : colors::Violet1;
}

/*!
 * \brief Returns a border color for a primary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ModernButtonPalette::borderColorPrimary(bool enabled,
                                               bool pressed) const {
  return enabled ? (pressed ? colors::Violet9 : colors::Violet7)
                 : colors::Violet1;
}

/*!
 * \brief Returns a border color for a secondary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ModernButtonPalette::borderColorSecondary(bool enabled,
                                                 bool pressed) const {
  return enabled ? (pressed ? colors::Violet9 : colors::Violet7)
                 : colors::Violet1;
}
