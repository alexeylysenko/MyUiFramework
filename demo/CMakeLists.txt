cmake_minimum_required(VERSION 3.14)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(QML_IMPORT_PATH ${CMAKE_SOURCE_DIR}/src/MyUiFramework ${CMAKE_BINARY_DIR}/imports CACHE STRING "" FORCE)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Gui Qml QuickControls2 REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Gui Qml QuickControls2 REQUIRED)

add_executable(MyUiFrameworkDemo
  qml.qrc
  icon.qrc
  main.cpp
)

target_include_directories(MyUiFrameworkDemo PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>)

target_link_libraries(MyUiFrameworkDemo
  PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Qml
    Qt${QT_VERSION_MAJOR}::QuickControls2
    MyUiFramework)
