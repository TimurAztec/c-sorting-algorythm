#include <stdlib.h>
#include <stdio.h>
#include "sorting-algorithm.h"

int main(int argc, char *argv[]) {
    int number_formated[argc-1];
    for (size_t i = 0; i < argc-1; i++)
    {
        number_formated[i] = (int) *argv[i+1];
    }

    sort(number_formated, (sizeof(number_formated)/sizeof(int)), true);
    printf("\n");
    for (size_t i = 0; i < (sizeof(number_formated)/sizeof(int)); i++)
    {
        printf("%c ", number_formated[i]);
    }
    printf("\n---------------------------\n");
    sort(number_formated, (sizeof(number_formated)/sizeof(int)), false);
    printf("\n");
    for (size_t i = 0; i < (sizeof(number_formated)/sizeof(int)); i++)
    {
        printf("%c ", number_formated[i]);
    }

    return EXIT_SUCCESS;
}