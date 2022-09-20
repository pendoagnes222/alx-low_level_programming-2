#include "main.h"

/**
*swamp_int - swaps the vale pointed to by argument
*
*@a: pointer argument 1
*@b: pointer argument 2
*/
void swap_int(int *a, int *b)
{
  int con = *a;
  
  *a = *b;
  *b = con;
}  
