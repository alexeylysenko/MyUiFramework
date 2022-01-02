#pragma once

#include <QColor>
#include <QObject>

/*!
 * \brief An abstract class for a palette for an Icon control.
 * \class AbstractIconPalette
 */

class AbstractIconPalette : public QObject {
  Q_OBJECT
  Q_PROPERTY(QColor color READ color CONSTANT)
public:
  /*!
   * \brief A default QObject-based constructor.
   * \param parent
   */
  explicit AbstractIconPalette(QObject *parent = nullptr) : QObject{parent} {}

  /*!
   * \brief Returns a color that is used to draw an Icon control.
   * This is a pure virtual function and must be implemented in custom icon
   * palette.
   * \return
   */
  virtual QColor color() const = 0;
};
