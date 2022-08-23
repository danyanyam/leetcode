cmake_minimum_required(VERSION 3.5)
project(leetcode)

# НЕ ДВИГАТЬ СТРОЧКУ!!!!!!!!!!!!!!!!!
set(PROBLEM_NAME "ActivitySelection")

#set(CODE_TYPE "problems")
set(CodeType "algorithms")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)
set(SOLUTION_SOURCES ${PROJECT_SOURCE_DIR}/${CodeType}/${PROBLEM_NAME}/solution.cpp)
set(SOLUTION_TEST_SOURCES ${PROJECT_SOURCE_DIR}/${CodeType}/${PROBLEM_NAME}/solution_test.cpp)
set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/${CodeType}/${PROBLEM_NAME}/interface.h)
set(UTILS_SOURCES ${PROJECT_SOURCE_DIR}/utils/utils.cpp)

add_library(solution STATIC ${SOLUTION_SOURCES})
add_library(utils STATIC ${UTILS_SOURCES})
include_directories(${PROJECT_SOURCE_DIR}/utils)
set(CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}/bin;${CMAKE_MODULE_PATH}")


# Conan settins
include(${CMAKE_BINARY_DIR}/bin/conanbuildinfo.cmake)
enable_testing()
conan_basic_setup()

find_package(GTest)
find_package(fmt)

enable_testing()

add_executable(
        solution_test
        ${SOLUTION_TEST_SOURCES}
)
target_link_libraries(
        solution_test
        solution
        utils
        ${CONAN_LIBS}
)

