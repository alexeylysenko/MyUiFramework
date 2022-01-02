#pragma once

#include <QColor>
#include <QObject>

/*!
 * \brief An abstract class for a palette for a BusyIndicator control.
 * \class AbstractBusyIndicatorPalette
 */

class AbstractBusyIndicatorPalette : public QObject {
  Q_OBJECT
  Q_PROPERTY(QColor startColor READ startColor CONSTANT)
  Q_PROPERTY(QColor endColor READ endColor CONSTANT)

public:
  /*!
   * \brief A default QObject-based constructor.
   * \param parent
   */
  explicit AbstractBusyIndicatorPalette(QObject *parent = nullptr)
      : QObject{parent} {}

  /*!
   * \brief Returns a start color that is used to draw a BusyIndicator control.
   * This is a pure virtual function and must be implemented in custom busy
   * indicator palette.
   * \return
   */
  virtual QColor startColor() const = 0;

  /*!
   * \brief Returns an end color that is used to draw a BusyIndicator control.
   * This is a pure virtual function and must be implemented in custom busy
   * indicator palette.
   * \return
   */
  virtual QColor endColor() const = 0;
};
