cmake_minimum_required(VERSION 3.0.0)
project(hunt_the_wumpus)
enable_testing()

set(Boost_INCLUDE_DIR /usr/local/boost_1_77_0/)
set(Boost_LIBRARY_DIR /usr/local/boost_1_77_0/stage/lib/)

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.77 COMPONENTS log unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIR} ./src)

add_subdirectory(src)
add_subdirectory(tests)

add_executable(main main.cpp)

target_link_libraries(main room utils)
