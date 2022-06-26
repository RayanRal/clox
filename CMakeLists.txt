cmake_minimum_required(VERSION 3.22)
project(clox C)

set(CMAKE_C_STANDARD 11)

include_directories(clox)
include_directories(vm)

file(GLOB SRC_FILES_CLOX ${PROJECT_SOURCE_DIR}/clox/*.c ${PROJECT_SOURCE_DIR}/clox/*.h)
file(GLOB SRC_FILES_VM ${PROJECT_SOURCE_DIR}/vm/*.c ${PROJECT_SOURCE_DIR}/vm/*.h)

add_executable(clox
        ${SRC_FILES_CLOX}
        ${SRC_FILES_VM}
        )
