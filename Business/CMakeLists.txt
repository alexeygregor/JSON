cmake_minimum_required(VERSION 3.16)
project(Business)

set(CMAKE_CXX_STANDARD 20)
set(protobuf_MODULE_COMPATIBLE TRUE)
set(ABSL_ENABLE_INSTALL ON)
set(_PROTOBUF_LIBPROTOBUF libprotobuf)
message(STATUS "PROTOBUF_VERSION: " $PROTOBUF_VERSION)
include(FetchContent)
FetchContent_Declare(
        gRPC
        GIT_REPOSITORY https://github.com/grpc/grpc
        GIT_TAG        v1.67.0
)
add_executable(Business main.cpp)