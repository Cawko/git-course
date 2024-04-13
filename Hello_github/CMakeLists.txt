cmake_minimum_required(VERSION 3.5)

project(Hello_github LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Hello_github main.cpp)

include(GNUInstallDirs)
install(TARGETS Hello_github
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
