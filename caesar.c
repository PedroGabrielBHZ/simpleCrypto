#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void caesarCipherASCII(int shift) {
    int c;
    while ((c = getchar()) != EOF) {
        putchar((c + shift) % 256);
    }
    putchar('\n');
}

void caesarCipherAlphabetical(int shift) {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            putchar(((c - 'A' + shift) % 26 + 26) % 26 + 'A');
        } else if (c >= 'a' && c <= 'z') {
            putchar(((c - 'a' + shift) % 26 + 26) % 26 + 'a');
        } else {
            putchar(c);
        }
    }
    putchar('\n');
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s shift\n", argv[0]);
        return 1;
    }

    int shift = atoi(argv[1]);
    caesarCipherAlphabetical(shift);
    return 0;
}
