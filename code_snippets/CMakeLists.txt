cmake_minimum_required (VERSION 3.5)
project (EigenLecture)

set(CMAKE_CXX_STANDARD 14)

include_directories(eigen)
add_executable(main main.cc)
