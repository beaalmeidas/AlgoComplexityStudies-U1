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
    printf("\n");

    free(original_array);
    free(search_array);
}


//FUNCTION 2
void matrix_pair_analysis() {
    int n;
    int counter = 0;

    int** matrix = matrix_starter(&n, &n);
    show_matrix(matrix, n, n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
        //for (int j = 0; j < n; j++) {
            if ((matrix[i][j] + matrix[j][i]) % 5 == 0) {
                counter++;
            }
        }
    }

    printf("\n--- FUNCTION 2 ANSWER ---");
    printf("\nNumber of triangular opposites with (A + B % 5 = 0) in the matrix:");
    printf("\n+--------------------------+");
    printf("\n| %d pairs           ", counter);
    printf("\n+--------------------------+\n");
    printf("\n");

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }

    free(matrix);
}


//FUNCTION 3
void matrices_comparison() {
    int n, answer;
    int sum_a = 0;
    int sum_b = 0;

    printf("\n--- Creating matrix A --- ");
    int*** A = matrix_3d_starter(&n);
    printf("\nMATRIX A = ");
    show_3d_matrix(A, n);
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                sum_a += A[i][j][k];
            }
        }
    }

    printf("Sum of all elements in matrix A = %d", sum_a);
    printf("\n");

    printf("\n--- Creating matrix B --- ");
    int*** B = matrix_3d_starter(&n);
    printf("\nMATRIX B = ");
    show_3d_matrix(B, n);
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                sum_b += B[i][j][k];
            }
        }
    }

    printf("Sum of all elements in matrix B = %d", sum_b);
    printf("\n");

    if (sum_a >= sum_b) {
        answer = 1;
    } else {
        answer = 0;
    }

    printf("\n--- FUNCTION 3 ANSWER ---");
    printf("\n+--------------------------+");
    printf("\n| %d          ", answer);
    printf("\n+--------------------------+\n");
    printf("\n");

    free_3d_matrix(A, n);
    free_3d_matrix(B, n);
}


//FUNCTION 4
void process_array() {
    int n;
    int sum = 0;

    int* V = array_starter(&n);
    show_array(V, n);

    for (int i = 0; i < n; i++) {
        if (V[i] % 2 == 0) {
            sum += V[i];
        } else {
            int factorial = 1;

            for (int j = 1; j <= V[i]; j++) {
                factorial *= j;
            }

            sum += factorial;
        }
    }

    printf("\n--- FUNCTION 4 ANSWER ---");
    printf("\nSum of elements in the array acoording to (if element % 2 == 0, sum += element) && (element % 2 != 0, sum += factorial(element)):");
    printf("\n+--------------------------+");
    printf("\n| %d            ", sum);
    printf("\n+--------------------------+\n");
    printf("\n");

    free(V);
}


//FUNCTION 5
void count_elements_in_sorted_array() {
    int n;
    int count = 0;

    printf("\n--- Creating array A --- ");
    int* A = array_starter(&n);
    show_array(A, n);

    printf("\n--- Creating array B --- ");
    int* B = array_starter(&n);
    show_array(B, n);
    printf("\n");
    printf("\n--- Sorted array B --- ");
    bubble_sort(B, n);
    show_array(B, n);

    for (int i = 0; i < n; i++) {

    if (binary_search(B, n, A[i])) {
        count++;
        }
    }

    printf("\n--- FUNCTION 5 ANSWER ---");
    printf("\nNumber of elements from A found in B:");
    printf("\n+--------------------------+");
    printf("\n| %d            ", count);
    printf("\n+--------------------------+\n");
    printf("\n");

    free(A);
    free(B);
}