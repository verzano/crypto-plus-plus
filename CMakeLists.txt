cmake_minimum_required(VERSION 3.6)
project(crypto_plus_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib/include/crypto-plus-plus)

set(SOURCE_FILES
        app/src/main.cpp
        lib/src/affine.cpp
        lib/src/atbash.cpp
        lib/src/caesar.cpp
        lib/src/simplesubstitution.cpp)
add_executable(${PROJECT_NAME}_exec ${SOURCE_FILES})
