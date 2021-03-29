cmake_minimum_required(VERSION 3.17)
project(fresnelZoneCalculator C)

set(CMAKE_C_STANDARD 99)

add_executable(fresnelZoneCalculator main.c fresnel.h fresnel.c)