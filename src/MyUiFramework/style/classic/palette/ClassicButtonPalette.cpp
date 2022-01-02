#include "ClassicButtonPalette.h"

#include "ClassicStyleColors.h"

/*!
 * \brief A classic style palette for a Button control.
 * \class ClassicButtonPalette
 */

/*!
 * \brief A default QObject-based constructor.
 * \param parent
 */
ClassicButtonPalette::ClassicButtonPalette(QObject *parent)
    : AbstractButtonPalette{parent} {}

/*!
 * \brief Returns a background color for a primary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ClassicButtonPalette::backgroundColorPrimary(bool enabled,
                                                    bool pressed) const {
  return enabled ? (pressed ? colors::Blue2 : colors::Blue1) : colors::Gray71;
}

/*!
 * \brief Returns a background color for a secondary button based on enabled
 * or disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ClassicButtonPalette::backgroundColorSecondary(bool enabled,
                                                      bool pressed) const {
  return enabled ? (pressed ? colors::Gray98 : colors::White) : colors::Gray97;
}

/*!
 * \brief Returns a text color for a primary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ClassicButtonPalette::textColorPrimary(bool enabled,
                                              bool pressed) const {
  return enabled ? (pressed ? colors::Gray98 : colors::White) : colors::Gray97;
}

/*!
 * \brief Returns a text color for a secondary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ClassicButtonPalette::textColorSecondary(bool enabled,
                                                bool pressed) const {
  return enabled ? (pressed ? colors::Blue2 : colors::Blue1) : colors::Gray78;
}

/*!
 * \brief Returns a border color for a primary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ClassicButtonPalette::borderColorPrimary(bool enabled,
                                                bool pressed) const {
  return enabled ? (pressed ? colors::Blue2 : colors::Blue1) : colors::Gray71;
}

/*!
 * \brief Returns a border color for a secondary button based on enabled or
 * disabled state and pressed or normal state.
 * \param enabled
 * \param pressed
 * \return
 */
QColor ClassicButtonPalette::borderColorSecondary(bool enabled,
                                                  bool pressed) const {
  return enabled ? (pressed ? colors::Blue2 : colors::Blue1) : colors::Gray78;
}
