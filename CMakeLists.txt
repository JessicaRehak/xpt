cmake_minimum_required(VERSION 3.7)
set (CMAKE_CXX_STANDARD 11)
project(xpt)

file(GLOB_RECURSE sources "src/*.cpp")
set(testing_sources ${sources})

list(FILTER sources EXCLUDE REGEX ".*(_test).cpp")
list(FILTER testing_sources EXCLUDE REGEX "main.cpp")

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(xpt ${sources})
add_executable(xpt_test ${testing_sources})
add_test(NAME tests COMMAND xpt_test)

target_link_libraries(xpt_test ${GTEST_BOTH_LIBRARIES})






