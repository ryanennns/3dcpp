cmake_minimum_required(VERSION 3.25)
project(3Drender)

set(CMAKE_CXX_STANDARD 17)

add_executable(3Drender main.cpp components/Ray.cpp components/Ray.h components/Vector3D.cpp components/Vector3D.h)
