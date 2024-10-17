cmake_minimum_required(VERSION 3.12)          # Required
project(cuarternion_resp)                     # Required
add_subdirectory(googletest)                  # googletest subdirectory
include_directories(googletest/include) 
add_executable(tests tests.cpp Cuaternion.cpp Cuaternion.h)               # Required
target_link_libraries(tests PRIVATE gtest)    # Required for googletest