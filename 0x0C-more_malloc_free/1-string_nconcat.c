#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, z;
char *s;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
for (x = 0; s1[x]; ++x)
{
	;
}
for (y = 0; s2[y] && y < n; ++y)
{
	;
}
s = malloc(sizeof(char) * (x + y + 1));
if (s == NULL)
{
return (NULL);
}

for (z = 0; z < x; z++)
{
	s[z] = s1[z];
}
for (z = 0; z < y; z++)
{
	s[z + x] = s2[z];
}

s[x + y] = '\0';
return (s);
}

