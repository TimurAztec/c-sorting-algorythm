#include "sorting-algorithm.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sort(int *arr, size_t length, _Bool decr) {
    for (size_t times = 0; times < length; times++)
    {
        for (size_t i = 0; i < length - 1; i++)
        {
            if (decr) {
                if (arr[i] < arr[i+1]) {
                    printf("%c|%c ", arr[i], arr[i+1]);
                    int temp_num = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp_num;
                    printf("-> %c|%c\n", arr[i], arr[i+1]);
                }
            } else {
                if (arr[i] > arr[i+1]) {
                    printf("%c|%c ", arr[i], arr[i+1]);
                    int temp_num = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp_num;
                    printf("-> %c|%c\n", arr[i], arr[i+1]);
                }
            }
        }
    }
}