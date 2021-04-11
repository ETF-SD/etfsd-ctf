#include <stdio.h>
#include <stdlib.h>

#define LEN(arr) (sizeof(arr) / sizeof(*arr))
#define __(c) (c + 0x69)
#define ___(p)          \
  do {                  \
    char* c = (char*)p; \
    while (*c) {        \
      *c++ -= 0x69;     \
    }                   \
  } while (0)

char f[] = {__('e'), __('t'), __('f'), __('s'), __('d'), __('{'),
            __('l'), __('0'), __('l'), __('_'), __('g'), __('0'),
            __('_'), __('@'), __('w'), __('@'), __('y'), __('}')};

void w() {
  ___(f);
  printf("nice! here's your flag: %s\n", f);
}

int main() {
  int y = -2033218866;
  int l = -828337715;
  int v = -1983083102;
  int f = -1714515560;
  int u = -1601464374;
  int s = -889192454;

  char k[64];
  scanf("%64s", k);

  int _[] = {y, l, v, f, u, s};
  for (int i = 0; i < LEN(_); i++) {
    int t = ~(_[i] ^ i);
    for (int b = 0; b < sizeof(t); b++) {
      char z = (t >> (8 * (3 - b))) & 0xFF;
      if (k[i * 4 + b] != z) {
        printf("lol no try again\n");
        return EXIT_FAILURE;
      }
    }
  }

  w();
}
