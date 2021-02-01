#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define OB(a) (a) + 0x3C
#define DEOB(str)           \
    do                      \
    {                       \
        char *ptr = str;    \
        while (*ptr)        \
            *ptr++ -= 0x3C; \
    } while (0)
#define OBSTR(str)          \
    do                      \
    {                       \
        char *ptr = str;    \
        while (*ptr)        \
            *ptr++ += 0x3C; \
    } while (0)

static char flag[] = {OB('e'), OB('t'), OB('f'), OB('s'), OB('d'), OB('{'),
                      OB('r'), OB('3'), OB('v'), OB('_'), OB('1'), OB('s'),
                      OB('_'), OB('w'), OB('3'), OB('1'), OB('r'), OB('d'),
                      OB('}')};

void win()
{

    DEOB(flag);
    puts(flag);
    OBSTR(flag);
}

int main()
{
    char bruh[64];
    scanf("%s", bruh);
    // they will never get the flag here because its literally impossible,
    // null ptr was segfaulting which is rude
    if (!strcmp(&flag, (const char *)&bruh))
    {
        win();
    }
}