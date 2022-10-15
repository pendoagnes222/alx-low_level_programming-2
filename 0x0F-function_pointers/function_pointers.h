#ifndef FUNCTION-POINTERS_H
#define FUNCTION-POINTERS_H

#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
