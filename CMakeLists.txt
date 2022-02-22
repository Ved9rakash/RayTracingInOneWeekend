cmake_minimum_required(VERSION 3.21)
project(RayTracingInOneWeekend)

set(CMAKE_CXX_STANDARD 20)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/extern)

set(CPP_FILES
        src/main.cpp
        src/vec3.cpp
        src/color.cpp
        )

set(HPP_FILES
        include/color.hpp
        include/ray.hpp
        include/vec3.hpp
        include/view.hpp
        extern/stb_image.h
        )

add_executable(RayTracingInOneWeekend ${CPP_FILES})
