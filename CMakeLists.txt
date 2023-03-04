cmake_minimum_required(VERSION 3.24)
project(hwr_cpp_assignments)

set(CMAKE_CXX_STANDARD 14)

add_executable(hwr_cpp_assignments
        ZeichenElement.cpp ZeichenElement.h Koordinate.cpp Koordinate.h Kreis.cpp Kreis.h Rechteck.cpp Rechteck.h main.cpp InitException.h Ui.h Ui.cpp)
