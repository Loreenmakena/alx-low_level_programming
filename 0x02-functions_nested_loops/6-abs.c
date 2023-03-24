#include "main.h"
/**
 * _abs - computes the absolute value of a integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
if (c < 0i)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
