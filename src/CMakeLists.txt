cmake_minimum_required(VERSION 3.21.1)

project(SIS)

file(GLOB_RECURSE SRC_FILES *.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)