cmake_minimum_required(VERSION 3.25)
project(3Drender)

set(CMAKE_CXX_STANDARD 17)

add_executable(3Drender main.cpp components/Ray.cpp components/Ray.h components/Vector3D.cpp components/Vector3D.h render_engine/RasterOptions.cpp render_engine/headers/RasterOptions.h render_engine/ViewPort.cpp render_engine/headers/ViewPort.h render_engine/Renderer.cpp render_engine/headers/Renderer.h _proof-of-concepts/ViewPortTest.cpp environment/Scene.cpp environment/Scene.h environment/resources/Shape.cpp environment/resources/Shape.h)
