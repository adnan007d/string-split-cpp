set(PROJECT_NAME string_split)

project(${PROJECT_NAME} CXX)

set(SOURCES string_split.hpp)

add_library(${PROJECT_NAME} INTERFACE ${SOURCES})

