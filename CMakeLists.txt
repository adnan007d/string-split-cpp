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

add_subdirectory(tests)

add_subdirectory(benchmark)