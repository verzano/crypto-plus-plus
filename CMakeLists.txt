cmake_minimum_required(VERSION 3.6)
project(crypto_plus_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include/crypto-plus-plus)

set(SOURCE_FILES
        main.cpp
        src/atbash.cpp
        src/affine.cpp
        src/caesar.cpp)
add_executable(${PROJECT_NAME}_exec ${SOURCE_FILES})
