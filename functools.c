#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// Module test
int functools_test() {
    int a, b;
    a = 6;
    b = 7;
    printf("%d\n", min(a,b));
    printf("%d\n", max(a,b));
    return 0;
}
