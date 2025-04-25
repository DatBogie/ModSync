cmake_minimum_required(VERSION 3.19)
project(ModSync LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_AUTORCC ON)

qt_standard_project_setup()

qt_add_executable(ModSync
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    modpackwizard.h modpackwizard.cpp
    modsyncutils.h modsyncutils.cpp
    resources.qrc
    iconpicker.h iconpicker.cpp
)

target_link_libraries(ModSync
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS ModSync
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET ModSync
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
