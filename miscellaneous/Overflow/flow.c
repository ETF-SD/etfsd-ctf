#include <stdio.h>
#include <stdlib.h>

#define OB(a) (a) + 0xAB
#define DEOB(str)           \
    do {                    \
        char* ptr = str;    \
        while (*ptr)        \
            *ptr++ -= 0xAB; \
    } while (0)
#define OBSTR(str)          \
    do {                    \
        char* ptr = str;    \
        while (*ptr)        \
            *ptr++ += 0xAB; \
    } while (0)

void win() {
    char flag[] = {OB('e'), OB('t'), OB('f'), OB('s'), OB('d'), OB('{'),
                   OB('l'), OB('0'), OB('l'), OB('_'), OB('3'), OB('z'),
                   OB('_'), OB('p'), OB('w'), OB('n'), OB('}')};
    DEOB(flag);
    puts(flag);
    OBSTR(flag);
}

int main() {
    volatile int a = 0;
    char buf[32];
    gets(buf);
    if (a != 0) {
        win();
    }
    return 0;
}
