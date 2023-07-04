cmake_minimum_required(VERSION 3.5.1)

# set the project name
project(assembler)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB COMMON_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
set(INC ${COMMON_HEADER})

file(GLOB COMMON_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.c)

set(SRC ${COMMON_SRC})
set(MAIN main.c)

add_executable(assembler main.c ${SRC} ${INC})

target_include_directories(assembler PUBLIC
                          "${CMAKE_CURRENT_SOURCE_DIR}"
                          )