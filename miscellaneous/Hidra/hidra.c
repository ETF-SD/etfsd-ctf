#include <stdint.h>
#include <stdio.h>

int main()
{
    char in[20];
    scanf("%s", in);

    uint32_t __null = (~0x65746673) ^ 1;
    uint32_t __nullptr = (~0x647b6c30) ^ 2;
    uint32_t __nullerptr = (~0x6c5f6730) ^ 3;
    uint32_t __nullestptr = (~0x5f407740) ^ 4;
    uint32_t __pp_ptr = (~0x797d0000) ^ 5;

    uint32_t __gcc_intrinsic[] = {__null, __nullptr, __nullerptr, __nullestptr, __pp_ptr};
    for (int i = 0; i < 5; i++)
    {
        uint32_t lolz = __gcc_intrinsic[i] ^ (i + 1);
        uint32_t temp = ~(*(uint32_t *)(uint64_t *)&lolz);
        for (int b = 0; b < 4; b++)
        {
            uint8_t byte = ((temp >> (8 * 3 - (b * 8))) & 0xFF);
            if (in[i * 4 + b] == byte)
                printf("%c", byte);
        }
    }
}
