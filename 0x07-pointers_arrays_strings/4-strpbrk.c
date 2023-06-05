#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string @s
 * of any of the bytes in the string @accept
 *
 * @s:the string to be searched
 * @accept:the set of bytes to be searched for
 * Return:if a set is matched - a pointer to the matched byte
 * if no set is matched  - NULL
 */

char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
