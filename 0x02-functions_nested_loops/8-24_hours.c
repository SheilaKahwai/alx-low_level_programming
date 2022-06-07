#include "main.h"

/**
 * jack_bauer - prints the ticking clock
 */

void jack_bauer(void)
{
int x = 0;
while (x < 24)
{
int y = 0;
while (y < 60)
{
_putchar(x + '0');
_putchar(':');
_putchar(y + '0');
_putchar('\n');
y++;
}
x++;
}
}
