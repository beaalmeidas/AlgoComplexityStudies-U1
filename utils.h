#ifndef UTILS_H
#define UTILS_H


int rng();

int** auto_matrix_generator(int rows, int columns);
int** input_matrix_generator(int rows, int columns);
void show_matrix(int** matrix, int rows, int columns);
int** matrix_starter(int *rows, int *columns);

int* auto_array_generator(int length);
int* input_array_generator(int length);
void show_array(int* array, int length);
int* array_starter(int *length);

void clear_screen();

#endif