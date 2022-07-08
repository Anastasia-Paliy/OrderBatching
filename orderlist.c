#include <stdio.h>
#include <stdlib.h>
#include "random.h"

// Run test
int orderlist_test() {
    int orders, items, picking_capacity;
    int i, j;
    init_random();
    picking_capacity = 6;
    orders = 10;
    items = random_integer_in_range(1, picking_capacity);
    int order_list[orders][items][2];
    for (i = 0; i < orders; i++) {
        for (j = 0; j < items; j++) {
            order_list[i][j][0] = random_integer_in_range(0, 50);
            order_list[i][j][1] = random_integer_in_range(0, 50);
        }
    }
    // Print order list
    for (i = 0; i < orders; i++) {
        for (j = 0; j < items; j++) {
            printf("(%d, %d) ", order_list[i][j][0], order_list[i][j][0]);
        }
        printf("\n");
    }


    return 0;
}