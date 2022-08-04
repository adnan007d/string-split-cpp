
project(split_test)

add_executable(split_test string_split_test.cpp)

enable_testing()
find_package(GTest REQUIRED)


target_link_libraries(split_test GTest::gtest GTest::gtest_main)