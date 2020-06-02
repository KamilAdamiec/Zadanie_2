#include "prostokat.h"
#include "prostopadloscian.h"
#include <stdio.h>

int main() {
    printf("Co policzyc?\n");
    printf("1. Pole prostokata\n");
    printf("2. Objetosc prostopadloscianu\n");
    char wybor;
    scanf("%c", &wybor);

    switch (wybor) {
        case '1':
            prostokat();
            break;
        case '2':
            prostopadloscian();
            break;
    }
}
