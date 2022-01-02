#pragma once

#include <QColor>
#include <QObject>

#include "style/ButtonType.h"

/*!
 * \brief An abstract class for a palette for a Button control.
 * \class AbstractButtonPalette
 */

class AbstractButtonPalette : public QObject {
  Q_OBJECT
public:
  /*!
   * \brief A default QObject-based constructor.
   * \param parent
   */
  explicit AbstractButtonPalette(QObject *parent = nullptr) : QObject{parent} {}

  /*!
   * \brief Returns a background color for a Button control based on a button
   * type, enabled or disabled state and pressed or normal state.
   * \param buttonType
   * \param enabled
   * \param pressed
   * \return
   */
  Q_INVOKABLE QColor backgroundColor(ButtonType::Type buttonType, bool enabled,
                                     bool pressed) const {
    switch (buttonType) {
    case ButtonType::Type::Primary:
      return backgroundColorPrimary(enabled, pressed);
    case ButtonType::Type::Secondary:
      return backgroundColorSecondary(enabled, pressed);
    default:
      return backgroundColorPrimary(enabled, pressed);
    }
  }

  /*!
   * \brief Returns a text color for a Button control based on a button
   * type, enabled or disabled state and pressed or normal state.
   * \param buttonType
   * \param enabled
   * \param pressed
   * \return
   */
  Q_INVOKABLE QColor textColor(ButtonType::Type buttonType, bool enabled,
                               bool pressed) const {
    switch (buttonType) {
    case ButtonType::Type::Primary:
      return textColorPrimary(enabled, pressed);
    case ButtonType::Type::Secondary:
      return textColorSecondary(enabled, pressed);
    default:
      return textColorPrimary(enabled, pressed);
    }
  }

  /*!
   * \brief Returns a border color for a Button control based on a button
   * type, enabled or disabled state and pressed or normal state.
   * \param buttonType
   * \param enabled
   * \param pressed
   * \return
   */
  Q_INVOKABLE QColor borderColor(ButtonType::Type buttonType, bool enabled,
                                 bool pressed) const {
    switch (buttonType) {
    case ButtonType::Type::Primary:
      return borderColorPrimary(enabled, pressed);
    case ButtonType::Type::Secondary:
      return borderColorSecondary(enabled, pressed);
    default:
      return borderColorPrimary(enabled, pressed);
    }
  }

protected:
  /*!
   * \brief Returns a background color for a primary button based on enabled or
   * disabled state and pressed or normal state.
   * This is a pure virtual function and must be implemented in custom button
   * palette.
   * \param enabled
   * \param pressed
   * \return
   */
  virtual QColor backgroundColorPrimary(bool enabled, bool pressed) const = 0;
  /*!
   * \brief Returns a background color for a secondary button based on enabled
   * or disabled state and pressed or normal state.
   * This is a pure virtual function and must be implemented in custom button
   * palette.
   * \param enabled
   * \param pressed
   * \return
   */
  virtual QColor backgroundColorSecondary(bool enabled, bool pressed) const = 0;
  /*!
   * \brief Returns a text color for a primary button based on enabled or
   * disabled state and pressed or normal state.
   * This is a pure virtual function and must be implemented in custom button
   * palette.
   * \param enabled
   * \param pressed
   * \return
   */
  virtual QColor textColorPrimary(bool enabled, bool pressed) const = 0;
  /*!
   * \brief Returns a text color for a secondary button based on enabled or
   * disabled state and pressed or normal state.
   * This is a pure virtual function and must be implemented in custom button
   * palette.
   * \param enabled
   * \param pressed
   * \return
   */
  virtual QColor textColorSecondary(bool enabled, bool pressed) const = 0;
  /*!
   * \brief Returns a border color for a primary button based on enabled or
   * disabled state and pressed or normal state.
   * This is a pure virtual function and must be implemented in custom button
   * palette.
   * \param enabled
   * \param pressed
   * \return
   */
  virtual QColor borderColorPrimary(bool enabled, bool pressed) const = 0;
  /*!
   * \brief Returns a border color for a secondary button based on enabled or
   * disabled state and pressed or normal state.
   * This is a pure virtual function and must be implemented in custom button
   * palette.
   * \param enabled
   * \param pressed
   * \return
   */
  virtual QColor borderColorSecondary(bool enabled, bool pressed) const = 0;
};
