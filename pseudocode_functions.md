## Função 1
```
count_distinct_occurrences:
    inteiro n, k, occurrences = 0

    escreva ""
    original_array = array_starter(n)

    escreva ""
    search_array = array_starter(k)

    para i variando de 1 ate n faça:
        para j variando de 1 até k faça:
            se original_array[i] = search_array[j]:
                occurences = occurences + 1
            fimse
        fimpara
    fimpara

    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""

    free(original_array)
    free(search_array)
```
<br/>

## Função 2
```
matrix_pair_analysis:
    inteiro n, counter = 0

    matrix = matrix_starter(n, n)
    show_matrix(matrix, n, n)

    para i variando de 1 ate n faça:
        para j variando de 1 até n faça:
            se matrix[i][j] + matrix[j][i] % 5 = 0:
                contador = contador + 1
            fimse
        fimpara
    fimpara

    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""

    para i variando de 1 até n faça:
        free(matrix[i])
    fimpara

    free(matrix)
```
<br/>

## Função 3
```
matrices_comparison:
    inteiro n, answer
    inteiro sum_a = 0
    inteiro sum_b = 0

    escreva ""
    A = matrix_3d_starter(n)
    escreva ""
    show_3d_matrix(A, n)
    escreva ""

    para i variando de 1 até n faça:
        para j variando de 1 até n faça:
            para k variando de 1 até n faça:
                sum_a = sum_a + A[i][j][k]
            fimpara
        fimpara
    fimpara

    escreva ""
    escreva ""

    B = matrix_3d_starter(n)
    escreva ""
    show_3d_matrix(B, n)
    escreva ""

    para i variando de 1 até n faça:
        para j variando de 1 até n faça:
            para k variando de 1 até n faça:
                sum_b = sum_b + B[i][j][k]
            fimpara
        fimpara
    fimpara

    escreva ""
    escreva ""

    se sum_a >= sum_b:
        answer = 1
    senão:
        answer = 0
    fimse

    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""

    free_3d_matrix(A, n)
    free_3d_matrix(B, n)
```
<br/>

## Função 4
```
process_array:
    inteiro n, sum = 0

    V = array_starter(n)
    show_array(V, n)

    para i variando de 1 até n faça:
        se V[i] % 2 = 0:
            sum = sum + V[i]
        senão:
            inteiro factorial = 1

            para j variando de 1 até V[i] faça:
                factorial = factorial * j
            fimpara

            sum = sum + factorial
        fimse
    fimpara

    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""

    free(V)
```
<br/>

## Função 5
```
count_elements_in_sorted_array:
    inteiro n, count = 0

    escreva ""
    A = array_starter(n)
    show_array(A, n)

    escreva ""
    B = array_starter(n)
    show_array(B, n)

    escreva ""
    escreva ""
    bubble_sort(B, n)
    show_array(B, n)

    para i variando de 1 até n faça:
        se binary_search(B, n, A[i]):
            count = count + 1
        fimse

    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""
    escreva ""

    free(A)
    free(B)
```