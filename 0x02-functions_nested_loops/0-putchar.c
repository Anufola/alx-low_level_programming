#include <unistd.h>
#include "main.h"
void main() {
int c;
c = getchar();
while (c != EOF) {
putchar(c);
c = getchar();
return(0);}
}
