#include <unistd.h>
#include "main.h"
#include <_putchar>
/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[4] = "main";
int i;
for (i = 0; i < 4; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
