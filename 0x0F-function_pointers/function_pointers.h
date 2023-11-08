#ifndef FUNCTION_POINTERS_H
#include <stddef.h>
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_elem(int elem);
void print_elem_hex(int elem);
int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);

#endif
