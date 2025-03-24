cmake_minimum_required(VERSION 3.10)

project(option-lib)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(SOURCE_FILES
    src/main.cpp
    src/BlackScholes.cpp
)

add_executable(option-lib ${SOURCE_FILES})

