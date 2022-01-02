cmake_minimum_required(VERSION 3.14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Gui Qml REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Gui Qml REQUIRED)

add_library(MyUiFramework SHARED
  controls.qrc
  MyUiFramework_global.h
  MyUiFramework.h
  MyUiFramework.cpp
  style/MyAbstractStyle.h
  style/ButtonType.h
  style/palette/AbstractButtonPalette.h
  style/palette/AbstractBusyIndicatorPalette.h
  style/palette/AbstractIconPalette.h
  style/classic/MyClassicStyle.h
  style/classic/palette/ClassicStyleColors.h
  style/classic/palette/ClassicButtonPalette.h
  style/classic/palette/ClassicButtonPalette.cpp
  style/classic/palette/ClassicBusyIndicatorPalette.h
  style/classic/palette/ClassicBusyIndicatorPalette.cpp
  style/classic/palette/ClassicIconPalette.h
  style/classic/palette/ClassicIconPalette.cpp
  style/modern/MyModernStyle.h
  style/modern/palette/ModernStyleColors.h
  style/modern/palette/ModernButtonPalette.h
  style/modern/palette/ModernButtonPalette.cpp
  style/modern/palette/ModernBusyIndicatorPalette.h
  style/modern/palette/ModernBusyIndicatorPalette.cpp
  style/modern/palette/ModernIconPalette.h
  style/modern/palette/ModernIconPalette.cpp
)

target_link_libraries(MyUiFramework
    PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Gui Qt${QT_VERSION_MAJOR}::Qml)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/src/MyUiFramework
    PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

target_compile_definitions(MyUiFramework PRIVATE MYUIFRAMEWORK_LIBRARY)
