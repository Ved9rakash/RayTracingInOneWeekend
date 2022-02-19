cmake_minimum_required(VERSION 3.21)
project(RayTracingInOneWeekend)

set(CMAKE_CXX_STANDARD 20)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

set(CPP_FILES
        src/main.cpp
        src/vec3.cpp
        src/color.cpp
        )

add_executable(RayTracingInOneWeekend ${CPP_FILES})
