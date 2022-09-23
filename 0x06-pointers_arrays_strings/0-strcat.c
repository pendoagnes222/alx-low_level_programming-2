#include "main.h"

/**
 *_strccat -concatenates the string pointed to by @src to
 *the end of the string pointed to by @dest
 *@dest: string that will be oppended
 *@src: string to be concenated upon
 *Return:return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
int index = o, dest_len = 0;
while(dest[index++])
dest_len++;
for(index = o; scr[index];index++)
dest[dest_len++] = src[index];
return(dest);
}	
