cmake_minimum_required(VERSION 3.20)

# Use vcpkg to find libraries. VCPKG_ROOT is set as a system environment
# variable on lab machines. If you're on your own machine, make sure vcpkg
# is installed and VCPKG_ROOT is set - see the setup guide on Moodle.
if(DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()

# IMPORTANT: the toolchain file must be set BEFORE project(). If you move
# this above the if() block or reorder things, find_package(raylib) below
# will fail to find raylib even though vcpkg is installed correctly.
project(AssessmentGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(raylib CONFIG REQUIRED)

# TODO: as your project grows, list your extra .cpp files here, e.g.:
#   add_executable(AssessmentGame main.cpp Player.cpp Enemy.cpp)
add_executable(AssessmentGame main.cpp)

target_link_libraries(AssessmentGame PRIVATE raylib)
