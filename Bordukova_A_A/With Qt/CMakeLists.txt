cmake_minimum_required(VERSION 3.5)

project(vgb VERSION 0.1 LANGUAGES CXX)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/install" CACHE PATH "..." FORCE)
endif()



set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)
find_package(Doxygen)
if(DOXYGEN_FOUND)
	set(doxyfile_in ${CMAKE_SOURCE_DIR})

	configure_file(Doxyfile ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

	add_custom_target(docs 
	${DOXYGEN_EXECUTABLE}
	${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
	COMMENT "Generating API documentation with Doxygen"
	VERBATIM
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
			moscomsport.db
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


if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(vgb)
endif()

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

install(TARGETS vgb DESTINATION .)
macro(copy_directory src dst)
    execute_process(COMMAND ${CMAKE_COMMAND} -E copy_directory ${src} ${dst}
        RESULT_VARIABLE ret
        OUTPUT_VARIABLE out
        ERROR_VARIABLE  err
    )
    if(ret)
        message(FATAL_ERROR "ERROR ---> could not be copied: ${err}")
    endif()
endmacro()
