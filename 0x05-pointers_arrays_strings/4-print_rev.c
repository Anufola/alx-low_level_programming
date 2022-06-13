#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
int c;
for (c = 0; s[c] != 0; c++)
{
}
for (c = c - 1; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
