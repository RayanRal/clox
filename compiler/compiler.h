#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "chunk.h"
#include "scanner.h"
#include "object.h"

ObjFunction* compile(const char* source);
void markCompilerRoots();

#endif //CLOX_COMPILER_H
