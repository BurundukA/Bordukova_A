cmake_minimum_required(VERSION 3.5)

project(vgb VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS
    Core
    Gui
    Widgets
    Network
    REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS
    Core
    Gui
    Widgets
    Network
    REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)
find_package(Doxygen)
if(DOXYGEN_FOUND)
    add_custom_target(docs ${DOXYGEN_EXECUTABLE} docs.doxyfile
       COMMENT "Generating API documentation with Doxygen"
       VERBATIM
       SOURCES ${PRJ_DOXY}
       WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
endif()

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        autorization.cpp
        autorization.h
        autorization.ui
        users_choose.cpp
        users_choose.h
        users_choose.ui
        connect_data_base.h
        connect_data_base.cpp
        dinamic_items.h
        dinamic_items.cpp
        dynamic_item.h
        dynamic_item.cpp
        dynamic_layout.h
        dynamic_layout.cpp
        trainers_choose.h
        trainers_choose.cpp
        trainers_choose.ui
        dynamic_combobox.h
        dynamic_combobox.cpp
        administrator_choose.h
        administrator_choose.cpp
        administrator_choose.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(vgb
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET vgb APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(vgb SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(vgb
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(vgb PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(vgb PRIVATE Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(vgb PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS vgb
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(vgb)
endif()
