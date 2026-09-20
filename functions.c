#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


//FUNCTION 1
void count_distinct_occurrences() {
    int n;
    int k;
    int occurrences = 0;

    printf("\n--- Creating original array (to search for elements in) --- ");
    int* original_array = array_starter(&n);
    printf("\n--- Creating search array --- ");
    int* search_array = array_starter(&k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (original_array[i] == search_array[j]) {
                occurrences++;
            }
        }
    }

    printf("\n--- FUNCTION 1 ANSWER ---");
    printf("\nNumber of times the elements of the search list appear on the original list:");
    printf("\n+--------------------------+");
    printf("\n| %d occurrences           ", occurrences);
    printf("\n+--------------------------+\n");

    free(original_array);
    free(search_array);
}


//FUNCTION 2
void matrix_pair_analysis() {
    int n;
    int total = 0;

    int** matrix = matrix_starter(n, n);
}