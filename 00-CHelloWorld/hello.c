#include <stdio.h>

int main(void) {
    printf(
        "Hello, World!\nVersion de lenguaje C23: %ld \n",
        (__STDC_VERSION__)
    );
    return 0;
}