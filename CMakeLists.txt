cmake_minimum_required(VERSION 3.10)

project(docker-cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

include_directories(include)
aux_source_directory(src SOURCES)

add_executable(${PROJECT_NAME} ${SOURCES})