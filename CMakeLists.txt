cmake_minimum_required(VERSION 3.3)
project(Hangman)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Hangman.cpp Hangman.h)
add_executable(Hangman ${SOURCE_FILES})