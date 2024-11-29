cmake_minimum_required(VERSION 3.16)

project(snake VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appsnake
    main.cpp
)

qt_add_qml_module(appsnake
    URI snake
    VERSION 1.0
    QML_FILES Main.qml GameArea.qml Snake.qml
    SOURCES GameManager.h GameManager.cpp
    SOURCES SnakeData.h SnakeData.cpp
    SOURCES Body.h Body.cpp
    SOURCES GameplayManager.h GameplayManager.cpp
    SOURCES CollisionObject.h CollisionObject.cpp
    SOURCES Point.h Point.cpp
)

set_target_properties(appsnake PROPERTIES
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appsnake
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appsnake
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
