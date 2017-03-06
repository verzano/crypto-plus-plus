cmake_minimum_required(VERSION 3.6)
project(crypto_plus_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include/**)

set(SOURCE_FILES src/caesar.cpp test/caesar_test.cpp)
add_library(crypto_plus_plus ${SOURCE_FILES})