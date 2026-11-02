add_library(VehicleLib
    src/Vehicle.cpp
    src/Car.cpp
    src/Truck.cpp
)

target_include_directories(VehicleLib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)