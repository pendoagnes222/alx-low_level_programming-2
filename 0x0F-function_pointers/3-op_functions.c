#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - This function selects the correct func to
 * perform the operation
 * @s: The operator passed as arguement to program
 * Return: A pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)

{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (*s == *(ops[i]).op)
{
return (*(ops[i]).f);
}
i++;
}
return (NULL);
}
