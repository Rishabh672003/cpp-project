cmake_minimum_required(VERSION 3.9.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(
  DOWNLOAD
  https://github.com/cpm-cmake/CPM.cmake/releases/download/v0.38.3/CPM.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/cmake/CPM.cmake
  EXPECTED_HASH SHA256=cc155ce02e7945e7b8967ddfaff0b050e958a723ef7aad3766d368940cb15494
)
include(${CMAKE_CURRENT_BINARY_DIR}/cmake/CPM.cmake)

# Use the package PkgConfig to detect GTK+ headers/library files
CPMAddPackage(
    NAME GTK
    GIT_REPOSITORY https://github.com/GNOME/gtkmm.git
    GIT_TAG main
)
# add executable
project(GtkApp)
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_executable(GtkApp ${MY_SOURCES})
# Define MY_SOURCES to be a list of all the source files for my project
TARGET_LINK_LIBRARIES(GtkApp gtkmm)
