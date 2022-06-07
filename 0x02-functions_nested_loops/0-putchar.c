#include <unistd.h>
#include "main.h"
/**
 * main - function to print
 *
 * Return: 0
 */
void main() {
int c;
c = getchar();
while (c != EOF) {
putchar(c);
c = getchar();
return(0);}
}
