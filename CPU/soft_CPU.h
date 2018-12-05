//
// Created by max_l on 05.12.2018.
//

#ifndef CPU_SOFT_CPU_H
#define CPU_SOFT_CPU_H

#include <cstdio>
#include "Stack.h"
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <fcntl.h>
#include "DSL_COMANDS.h"
//----------------------------------------------------------------------------------------------------------------------
const char way_to_run[] = {"C:\\Users\\max_l\\CLionProjects\\CPU\\tell.txt"};
const int start_size_for_CPU_stack = 42;
const int start_size_for_CALL_stack = 43;
const int size_of_RAM = 1000;
const int num_of_reg = 4;
//----------------------------------------------------------------------------------------------------------------------

int CPU(char* bynary_code, int machine_code = -1);
char* fillBuff(int inFile);
long int calcSize(const char* inFile);
int RAM_destroy(char** RAM);
char do_command(char* bynary_code, int* pc, Stack* CPU_stack, Stack* CALL_stack, char* RAM, double* REGisters);

#endif //CPU_SOFT_CPU_H
