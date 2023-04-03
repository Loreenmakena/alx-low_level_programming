#include " main.h"
/**
 * _memcpy - a function that copies memory area bytes
 * @dest: memory where is stored and returns pointer
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */

char *__memcpy(char *dest, char *src, unsigned int n);
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
