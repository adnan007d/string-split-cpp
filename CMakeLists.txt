cmake_minimum_required(VERSION 3.23.3)

set(PROJECT_NAME split_string)

project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(SOURCES
    main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib)
include_directories(lib)
target_link_libraries(${PROJECT_NAME})



# Benchmark
set(BENCHMARK_SOURCES benchmark/main.cpp)

find_package(benchmark REQUIRED)
find_package(Boost 1.79)  

include_directories(${benchmark_INCLUDE_DIRS})

add_executable(string_split_benchmark ${BENCHMARK_SOURCES})
target_link_libraries(string_split_benchmark benchmark::benchmark)

# Tests

set(TEST_SOURCES tests/string_split_test.cpp)

add_executable(split_test ${TEST_SOURCES})

enable_testing()
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(split_test GTest::gtest GTest::gtest_main)
