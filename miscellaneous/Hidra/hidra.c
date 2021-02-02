#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

char in[20];
void death(int i)
{
    if (i + 1 != sizeof(in) / sizeof(&in))
    {
        printf("\nuh yeah not it\n");
        exit(1);
    }
}

int main()
{
    scanf("%s", in);

    uint32_t _null = (~0x65746673) ^ 1;
    uint32_t __nullptr = (~0x647b6c30) ^ 2;
    uint32_t __nullerptr = (~0x6c5f6730) ^ 3;
    uint32_t __nullestptr = (~0x5f407740) ^ 4;
    uint32_t __pp_ptr = (~0x797d0000) ^ 5;
    uint32_t __gcc_intrinsic[] = {_null, __nullptr, __nullerptr, __nullestptr, __pp_ptr};

    for (int i = 0; i < 5; i++)
    {
        uint32_t lolz = __gcc_intrinsic[i] ^ (i + 1);
        uint32_t temp = ~(*(uint32_t *)(uint64_t *)&lolz);
        for (int b = 0; b < 4; b++)
        {
            uint8_t byte = ((temp >> (8 * 3 - (b * 8))) & 0xFF);
            int idx = i * 4 + b;
            if (in[idx] == byte)
                printf("%c", byte);
            else
                death(idx);
        }
    }

    printf("\nyep!\n");
}
