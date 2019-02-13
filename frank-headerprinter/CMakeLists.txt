cmake_minimum_required(VERSION 3.0.2)

project(frank-headerprinter)

include(GNUInstallDirs)

set(SOURCES
    src/header_print_visitor.h
    src/header_print_visitor.cpp
    src/main.cpp
    )

add_executable(${PROJECT_NAME}
    ${SOURCES}
    )

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)

target_link_libraries(${PROJECT_NAME} frank-parser)
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${FRANK_PARSER_INCLUDE_DIRS}
    )

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
