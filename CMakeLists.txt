cmake_minimum_required(VERSION 3.22)
project(clox C)

set(CMAKE_C_STANDARD 11)

#set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -target x86_64-apple-darwin")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

include_directories(clox)

add_executable(clox
        clox/chunk.c
        clox/chunk.h
        clox/common.h
        clox/memory.c
        clox/memory.h
        clox/main.c clox/debug.h clox/debug.c clox/value.h clox/value.c)
