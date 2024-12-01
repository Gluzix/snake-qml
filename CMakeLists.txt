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
    SnakeData.h SnakeData.cpp
    Body.h Body.cpp
    GameplayManager.h GameplayManager.cpp
    CollisionObject.h CollisionObject.cpp
    Point.h Point.cpp
    KeyInputEventFilter.h KeyInputEventFilter.cpp
    SOURCES IMovableObject.h
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
