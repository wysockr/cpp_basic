cmake_minimum_required(VERSION 3.29)
project(basic)

set(CMAKE_CXX_STANDARD 20)

add_executable(basic main.cpp
        modifier.cpp
        modifier.h
        randomstr.cpp
        randomstr.h)
