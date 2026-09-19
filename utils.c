#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rng() {
    int random_num = rand() % 100;
    return random_num;
}


int** auto_matrix_generator(int rows, int columns) {
    int** matrix = malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {    
        matrix[i] = malloc(columns * sizeof(int));

        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rng();
        }
    }

    return matrix;
}


int** input_matrix_generator(int rows, int columns) {
    int** matrix = malloc(rows * sizeof(int));

    printf("\n");
    for (int i = 0; i < rows; i++) {    
        matrix[i] = malloc(columns * sizeof(int));

        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", (i+1), (j+1));
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix;
}


void show_matrix(int** matrix, int rows, int columns) {
    int r = rows;
    int c = columns;

    printf("\nMATRIX = ");

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


int** matrix_starter(int *rows, int *columns) {
    int choice;

    do {
        printf("\nWould you like to create your matrix automatically or manually?");
        printf("\n(1) Automatically / (2) Manually: ");
        scanf("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("\nInvalid option! Please choose 1 or 2.\n");
        }
    } while (choice != 1 && choice != 2);

    printf("\nHow many ROWS should the matrix have?: ");
    scanf("%d", rows);
    printf("How many COLUMNS should the matrix have?: ");
    scanf("%d", columns);

    switch (choice) {
        case 1:
            return auto_matrix_generator(*rows, *columns);
        case 2:
            return input_matrix_generator(*rows, *columns);
    }
}


int* auto_array_generator(int length) {
    int* array = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        array[i] = rng();
    }

    return array;
}


int* input_array_generator(int length) {
    int* array = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        printf("Element [%d]: ", (i+1));
        scanf("%d", &array[i]);
    }

    return array;
}


void show_array(int* array, int length) {
    printf("\n");
    printf("ARRAY = (");
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);

        if (i != (length - 1)) {
            printf(", ");
        }
    }

    printf(")");
    printf("\n\n");
}


int* array_starter(int *length) {
    int choice;

    do {
        printf("\nWould you like to create your array automatically or manually?");
        printf("\n(1) Automatically / (2) Manually: ");
        scanf("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("\nInvalid option! Please choose 1 or 2.\n");
        }
    } while (choice != 1 && choice != 2);

    printf("\nHow long do you want the array to be?: ");
    scanf("%d", length);

    switch (choice) {
        case 1:
            return auto_array_generator(*length);
        case 2:
            return input_array_generator(*length);
    }
}


void clear_screen() {
    printf("\e[1;1H\e[2J");
}


int main() {
    srand(time(NULL));
    int rows, columns, length;

    // int num = rng();
    // printf("\n\nGenerated random number = %d\n\n", num);

    // int ** matrix = auto_matrix_generator(&rows, &columns);
    // show_matrix(matrix, rows, columns);

    // int * array = auto_array_generator(&length);
    // show_array(array, length);

    // int** matrix = matrix_starter(&rows, &columns);
    // show_matrix(matrix, rows, columns);

    int* array = array_starter(&length);
    show_array(array, length);

    free(array);
}