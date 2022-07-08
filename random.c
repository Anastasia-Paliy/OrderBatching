#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

// RAND_MAX = 32767

int init_random() {
    srand(time(NULL));
    return 0;
}

// Returns a random integer in range [0, RAND_MAX]
int random_integer() {
    int r1, r2, r3, r;
    r1 = rand();
    r2 = rand();
    r3 = rand();
    r = (r1 + r2 + r3) / 3;
    return r;
}


// Returns a random integer in a given range [min, max]
int random_integer_in_range(int min, int max) {
    int r, l;
    r = random_integer();
    l = max - min + 1;
    r = r % l + min;
    return r;
}

// Module test
int random_test() {
    init_random();
    printf("%d\n", random_integer());
    printf("%d\n", random_integer_in_range(0, 10));
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", random_integer_in_range(0, 10));
    }
    //printf("%d\n", RAND_MAX);
    return 0;
}

/*
int random_massive()
{
    int i, n, *mas;
    n = 10;
    srand(time(0));
    mas = malloc(n * sizeof(int));
    printf("Сгенерированный массив:\n");
    for (i = 0; i < n; i++) {
        mas[i] = rand() % 100; // диапазон случайных чисел от 0 до 100
        printf("%d ", mas[i]);
    }
    putchar('\n');
    free(mas);
    //system("pause");
    return 0;
}
*/

