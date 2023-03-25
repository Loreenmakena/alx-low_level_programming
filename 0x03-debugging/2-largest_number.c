#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

<<<<<<< HEAD
if (a > b && b > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
=======
    if (a > b && a > c)
    {
        return (a);
    }
    else if (b > a && b > c)
    {
        return (b);
    }
    else
    {
        return (c);
    }
>>>>>>> 0a7ed3ad3bae09cdf6066c49c3e8f2edb939c1f4

}