#pragma once

#include "MyUiFramework_global.h"

#include <memory>

class MyAbstractStyle;

class MYUIFRAMEWORK_EXPORT MyUiFramework {
public:
  template <class T, typename std::enable_if<std::is_base_of<
                         MyAbstractStyle, T>::value>::type * = nullptr>
  static void enableStyle() {
    std::unique_ptr<T> style = std::make_unique<T>();
    static MyUiFramework framework(std::move(style));
  }

private:
  explicit MyUiFramework(std::unique_ptr<MyAbstractStyle> style);

  std::unique_ptr<MyAbstractStyle> m_style;
};
