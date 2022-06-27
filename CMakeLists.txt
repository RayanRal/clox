cmake_minimum_required(VERSION 3.22)
project(clox C)

set(CMAKE_C_STANDARD 11)

include_directories(clox)
include_directories(vm)
include_directories(scanner)
include_directories(compiler)


file(GLOB SRC_FILES_CLOX ${PROJECT_SOURCE_DIR}/clox/*.c ${PROJECT_SOURCE_DIR}/clox/*.h)
file(GLOB SRC_FILES_VM ${PROJECT_SOURCE_DIR}/vm/*.c ${PROJECT_SOURCE_DIR}/vm/*.h)
file(GLOB SRC_FILES_COMPILER ${PROJECT_SOURCE_DIR}/compiler/*.c ${PROJECT_SOURCE_DIR}/compiler/*.h)
file(GLOB SRC_FILES_SCANNER ${PROJECT_SOURCE_DIR}/scanner/*.c ${PROJECT_SOURCE_DIR}/scanner/*.h)


add_executable(clox
        ${SRC_FILES_CLOX}
        ${SRC_FILES_VM}
        ${SRC_FILES_COMPILER}
        ${SRC_FILES_SCANNER})
