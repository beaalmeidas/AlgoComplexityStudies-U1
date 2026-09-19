#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rng() {
    int random_num = rand() % 100;
    return random_num;
}


void show_matrix(int** matrix, int rows, int columns) {
    int r = rows;
    int c = columns;

    printf("\n\nMatrix auto-generated succesfully!\n");

    for (int i = 0; i < r; i++) {
        printf("\n");
        printf("(");

        for (int j = 0; j < c; j++) {
            printf("%d", matrix[i][j]);

            if (j != (c - 1)) {
                printf("\t");
            }
        }

        printf(")");
        printf("\n\n");
    }
}


int** auto_matrix_generator(int *rows, int *columns) {
    printf("\nHow many ROWS should the matrix have?: ");
    scanf("%d", rows);
    printf("\nHow many COLUMNS should the matrix have?: ");
    scanf("%d", columns);

    int** matrix = malloc(*rows * sizeof(int*));
    for (int i = 0; i < *rows; i++) {    
        matrix[i] = malloc(*columns * sizeof(int*));

        for (int j = 0; j < *columns; j++) {
            matrix[i][j] = rng();
        }
    }

    return matrix;
}


int main() {
    srand(time(NULL));
    int rows, columns;

    int num = rng();
    printf("\n\nGenerated random number = %d\n\n", num);

    int ** matrix = auto_matrix_generator(&rows, &columns);
    show_matrix(matrix, rows, columns);
}