cmake_minimum_required(VERSION 3.15)
project(VehicleAppProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)

add_executable(VehicleApp src/main.cpp)

target_link_libraries(VehicleApp PRIVATE VehicleLib)