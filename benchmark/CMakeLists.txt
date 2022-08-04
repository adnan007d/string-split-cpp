project(string_split_benchmark)

set(SOURCES main.cpp)

find_package(benchmark REQUIRED)
find_package(Boost 1.79)  

include_directories(${Boost_INCLUDE_DIRS})

add_executable(string_split_benchmark ${SOURCES})
target_link_libraries(string_split_benchmark benchmark::benchmark)