#pragma once

#include <QObject>

/*!
 * \brief A class represents all button types supported within Ui framework.
 * The "primary" type can be used to provide more visual weight to a button
 * while representing a primary action for users to take on the page.
 * The "secondary" type can be used to provide more visual weight to a button
 * while representing a secondary action for users to take on the page.
 * \class ButtonType
 */

class ButtonType {
  Q_GADGET
public:
  enum Type { Primary, Secondary };
  Q_ENUM(Type)

  ButtonType() = default;
};
