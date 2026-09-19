#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rng() {
    srand(time(NULL));
    int random_num = rand() % 100;
    return random_num;
}


void show_matrix(int** matrix, int rows, int columns) {
    int r = rows;
    int c = columns;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
    }
}


int** create_matrix() {
    int rows, columns;

    printf("\n\nHow many ROWS should the matrix have?: ");
    scanf("%d", &rows);
    printf("\n\nHow many COLUMNS should the matrix have?: ");
    scanf("%d", &columns);

    int** matrix = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {    
        matrix[i] = malloc(columns * sizeof(int*));

        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rng();
        }
    }

    return matrix;
}


int main() {
    int num = rng();
    printf("\n\nGenerated random number = %d\n\n", num);

    int ** matrix = create_matrix();
    show_matrix(matrix);
}