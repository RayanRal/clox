#include <stdio.h>

#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "../vm/vm.h"


int main(int argc, const char* argv[]) {
    initVM();

    Chunk chunk;
    initChunk(&chunk);

    int constantIndex = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, constantIndex, 1);

    constantIndex = addConstant(&chunk, 3.4);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constantIndex, 123);

    writeChunk(&chunk, OP_ADD, 123);

    constantIndex = addConstant(&chunk, 5.6);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constantIndex, 123);

    writeChunk(&chunk, OP_DIVIDE, 123);
    writeChunk(&chunk, OP_NEGATE, 1);

    writeChunk(&chunk, OP_RETURN, 1);

    disassembleChunk(&chunk, "test chunk");

    printf("\n== INTERPRETING == \n");
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;
}
