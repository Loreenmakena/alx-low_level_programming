#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isisalpha('H');
    _putchar(r + '0');
    r = _isisalpha('o');
    _putchar(r + '0');
    r = _isisalpha(108);
    _putchar(r + '0');
    r = _isisalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
