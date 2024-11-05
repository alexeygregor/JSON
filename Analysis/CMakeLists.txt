cmake_minimum_required(VERSION 3.16)
project(Analysis)

set(CMAKE_CXX_STANDARD 20)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(Analysis main.cpp)

target_link_libraries(Analysis PRIVATE nlohmann_json::nlohmann_json)