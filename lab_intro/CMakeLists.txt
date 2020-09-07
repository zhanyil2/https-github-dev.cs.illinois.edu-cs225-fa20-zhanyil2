cmake_minimum_required(VERSION 3.17)
project(lab_intro)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cs225)
include_directories(cs225/catch)
include_directories(cs225/lodepng)
include_directories(tests)

add_executable(lab_intro
        cs225/catch/catch.hpp
        cs225/catch/catchmain.cpp
        cs225/lodepng/lodepng.cpp
        cs225/lodepng/lodepng.h
        cs225/HSLAPixel.cpp
        cs225/HSLAPixel.h
        cs225/PNG.cpp
        cs225/PNG.h
        cs225/RGB_HSL.h
        tests/tests-part1.cpp
        tests/tests-part2.cpp
        alma.png
        Doxyfile
        lab_intro.cpp
        lab_intro.h
        main.cpp
        Makefile
        overlay.png)
