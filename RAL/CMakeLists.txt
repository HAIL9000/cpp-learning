cmake_minimum_required(VERSION 3.3)
project(RAL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Resource.cpp Resource.h File.cpp File.h Package.cpp Package.h Service.cpp Service.h)
add_executable(RAL ${SOURCE_FILES})