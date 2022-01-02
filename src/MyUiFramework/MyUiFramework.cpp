#include "MyUiFramework.h"

#include <QQmlEngine>

#include "style/MyAbstractStyle.h"

/*!
 * \brief An entry point to activate an overall Ui framework functionality.
 * \class MyUiFramework
 */

/*!
 * \brief Initializes Ui framework to work with a \a style style.
 * This is a private constructor.
 * \param style
 * \sa enableStyle
 */
MyUiFramework::MyUiFramework(std::unique_ptr<MyAbstractStyle> style)
    : m_style{std::move(style)} {
  qmlRegisterSingletonInstance("com.my.controls", 1, 0, "Style", m_style.get());
  qmlRegisterUncreatableType<ButtonType>(
      "com.my.controls", 1, 0, "ButtonType",
      "Error: this type contains only ButtonType enum");
  qRegisterMetaType<ButtonType::Type>();
}
