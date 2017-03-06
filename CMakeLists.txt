cmake_minimum_required(VERSION 3.6)
project(crypto_plus_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include/crypto-plus-plus)

#set(HEADER_FILES
#        include/crypto-plus-plus/affine.h
#        include/crypto-plus-plus/atbash.h
#        include/crypto-plus-plus/caesar.h)
#add_library(${PROJECT_NAME}_lib ${HEADER_FILES})

set(SOURCE_FILES
        main.cpp
        src/atbash.cpp
        src/affine.cpp
        src/caesar.cpp)
add_executable(${PROJECT_NAME}_exec ${SOURCE_FILES})

#set(TEST_FILES test/caesar_test.cpp)
#add_test(${PROJECT_NAME}_test ${TEST_FILES})
