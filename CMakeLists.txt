cmake_minimum_required(VERSION 3.10)
project(SistemaGestionIoT)
set(CMAKE_CXX_STANDARD 17)
add_executable(SistemaGestionIoT 
    src/Main.cpp 
    src/SensorBase.h 
    src/SensorTemperatura.h 
    src/SensorPresion.h 
    src/ListaSensor.h
)
include_directories(src)
