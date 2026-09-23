#ifndef UTILS_H
#define UTILS_H


int rng();

int** auto_matrix_generator(int rows, int columns);
int** input_matrix_generator(int rows, int columns);
void show_matrix(int** matrix, int rows, int columns);
int** matrix_starter(int *rows, int *columns);
int*** auto_3d_matrix_generator(int n);
int*** input_3d_matrix_generator(int n);
int*** matrix_3d_starter(int *n);
void show_3d_matrix(int*** matrix, int n);
void free_3d_matrix(int*** matrix, int n);

int* auto_array_generator(int length);
int* input_array_generator(int length);
void show_array(int* array, int length);
int* array_starter(int *length);

int* bubble_sort(int* array, int n);
int binary_search(int* array, int n, int target);

void clear_screen();
void back_to_menu();

#endif