#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int rng() {
    int random_num = rand() % 100;
    return random_num;
}


int** auto_matrix_generator(int rows, int columns) {
    int** matrix = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {    
        matrix[i] = malloc(columns * sizeof(int));

        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rng();
        }
    }

    return matrix;
}


int** input_matrix_generator(int rows, int columns) {
    int** matrix = malloc(rows * sizeof(int*));

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
    int matrix_shape;
    int generation_type;

    do {
        printf("\nWhat type of matrix would you like to create?");
        printf("\n(1) Square / (2) Rectangular: ");
        scanf("%d", &matrix_shape);

        if (matrix_shape != 1 && matrix_shape != 2) {
            printf("\nInvalid option! Please choose 1 or 2.\n");
        }
    } while (matrix_shape != 1 && matrix_shape != 2);

    if (matrix_shape == 1) {
        printf("\nWhat size should the square matrix have?: ");
        scanf("%d", rows);

        *columns = *rows;
    } else {
        printf("\nHow many ROWS should the matrix have?: ");
        scanf("%d", rows);

        printf("How many COLUMNS should the matrix have?: ");
        scanf("%d", columns);
    }

    do {
        printf("\nWould you like to create your matrix automatically or manually?");
        printf("\n(1) Automatically / (2) Manually: ");
        scanf("%d", &generation_type);

        if (generation_type != 1 && generation_type != 2) {
            printf("\nInvalid option! Please choose 1 or 2.\n");
        }
    } while (generation_type != 1 && generation_type != 2);

    switch (generation_type) {
        case 1:
            return auto_matrix_generator(*rows, *columns);
        case 2:
            return input_matrix_generator(*rows, *columns);
    }

    return NULL;
}


int*** auto_3d_matrix_generator(int n) {
    int*** matrix = malloc(n * sizeof(int**));

    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int*));

        for (int j = 0; j < n; j++) {
            matrix[i][j] = malloc(n * sizeof(int));

            for (int k = 0; k < n; k++) {
                matrix[i][j][k] = rng();
            }
        }
    }

    return matrix;
}


int*** input_3d_matrix_generator(int n) {
    int*** matrix = malloc(n * sizeof(int**));

    printf("\n");

    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int*));

        for (int j = 0; j < n; j++) {
            matrix[i][j] = malloc(n * sizeof(int));

            for (int k = 0; k < n; k++) {
                printf("Element [%d][%d][%d]: ", i + 1, j + 1, k + 1);
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    return matrix;
}


int*** matrix_3d_starter(int *n) {
    int generation_type;

    printf("\nWhat size should the 3D matrix have?: ");
    scanf("%d", n);

    do {
        printf("\nWould you like to create your matrix automatically or manually?");
        printf("\n(1) Automatically / (2) Manually: ");
        scanf("%d", &generation_type);

        if (generation_type != 1 && generation_type != 2) {
            printf("\nInvalid option! Please choose 1 or 2.\n");
        }
    } while (generation_type != 1 && generation_type != 2);

    switch (generation_type) {
        case 1:
            return auto_3d_matrix_generator(*n);

        case 2:
            return input_3d_matrix_generator(*n);
    }

    return NULL;
}


void show_3d_matrix(int*** matrix, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nLayer %d:\n", i + 1);

        for (int j = 0; j < n; j++) {
            printf("(");

            for (int k = 0; k < n; k++) {
                printf("%d", matrix[i][j][k]);

                if (k != n - 1) {
                    printf("\t");
                }
            }

            printf(")\n");
        }
    }

    printf("\n");
}


void free_3d_matrix(int*** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            free(matrix[i][j]);
        }

        free(matrix[i]);
    }

    free(matrix);
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


void back_to_menu() {
    printf("\n\nPress any key to go back to menu.");
    _getch();
    clear_screen();
}


// int main() {
//     srand(time(NULL));
//     int rows, columns, length;
//     int n;

//     // int num = rng();
//     // printf("\n\nGenerated random number = %d\n\n", num);

//     // int ** matrix = auto_matrix_generator(&rows, &columns);
//     // show_matrix(matrix, rows, columns);

//     // int * array = auto_array_generator(&length);
//     // show_array(array, length);

//     // int** matrix = matrix_starter(&rows, &columns);
//     // show_matrix(matrix, rows, columns);

//     // int* array = array_starter(&length);
//     // show_array(array, length);

//     // free();

//     int*** matrix_3d = matrix_3d_starter(&n);
//     show_3d_matrix(matrix_3d, n);
// }