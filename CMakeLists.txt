cmake_minimum_required(VERSION 3.24)
project(hwr_cpp_assignments)

set(CMAKE_CXX_STANDARD 14)

add_executable(hwr_cpp_assignments
        main.cpp Ui.h Ui.cpp Reading.cpp FlawedMeasurementException.h)
