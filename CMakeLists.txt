cmake_minimum_required(VERSION 3.5)
project(leetcode)

# НЕ ДВИГАТЬ СТРОЧКУ!!!!!!!!!!!!!!!!!
set(PROBLEM_NAME "MaxSubArray")

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

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)


set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    solution_test
    ${SOLUTION_TEST_SOURCES}
)
target_link_libraries(
    solution_test
    solution
    gtest_main
    utils
)

include(GoogleTest)
gtest_discover_tests(solution_test)
