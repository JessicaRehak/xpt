cmake_minimum_required(VERSION 3.7)
set (CMAKE_CXX_STANDARD 11)
project(xpt)

set (GCC_COVERAGE_COMPILE_FLAGS "-coverage -fprofile-arcs -ftest-coverage")
set (GCC_COVERAGE_LINK_FLAGS    "-coverage -lgcov")
set ( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
set ( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}" )

file(GLOB_RECURSE sources "src/*.cpp")
set(testing_sources ${sources})

list(FILTER sources EXCLUDE REGEX "main_test.cpp")
list(FILTER sources EXCLUDE REGEX ".(/tests/).")
list(FILTER testing_sources EXCLUDE REGEX "main.cpp")

enable_testing()
find_package(GTest REQUIRED)
set(GMOCK_INCLUDE_DIRS "/usr/include/gmock/")
set(GMOCK_BOTH_LIBRARIES "/usr/lib/libgmock.so;/usr/lib/libgmock_main.so")

get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()


include_directories(${GTEST_INCLUDE_DIRS}, ${GMOCK_INCLUDE_DIRS}, ${CMAKE_SOURCE_DIR}/inc, ${CMAKE_SOURCE_DIR}/inc/igl)

add_executable(xpt ${sources})
add_executable(xpt_test ${testing_sources})
add_test(NAME tests COMMAND xpt_test)

target_link_libraries(xpt_test ${GTEST_BOTH_LIBRARIES} ${GMOCK_BOTH_LIBRARIES})






