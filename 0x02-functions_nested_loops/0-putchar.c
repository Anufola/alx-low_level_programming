#include <unistd.h>
#include "main.h"
int _putchar(char c);
{
char msg[] = "_putchar\n";
int fd = open("/dev/tty", O_WRONLY);
write(fd, msg, sizeof(msg));
 return 0;
}
