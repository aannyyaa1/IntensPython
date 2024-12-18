#include <stdio.h>
#include <stdlib.h> /*для динамического выделения памяти*/
#define TRUE 1 
#define FALSE 0

void newmatrix(int** matrix, int n) { /*функция анализирует матрицу и заменяет в ней строки, содержащие отрицательные чисоа, нулями*/
    for (int i=0; i<n; i++) { /*обрабатываю каждую строку матрицы*/
        int flag = 0; /*флаг равен false - отрицательных элементов нет*/
        for (int j=0; j<n; j++) { /*обрабатываю каждый элемент строки*/
            if (matrix[i][j] < 0) { /*если данный элемент меньше 0*/
                flag = 1; /*флаг становится равен true*/
                break; /*прерывание цикла*/
            }
        }
        if (flag == TRUE) { /*если флаг = true, т.е. строка содержит отрицательные элементы*/
            for(int j=0; j<n; j++) {
                matrix[i][j] = 0; /*заменяю все элементы строки на 0*/
            }
        }
    }
} 

void printmatrix(int** matrix, int n) { /*функция вывода матрицы*/
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Введите размер матрицы (N): ");
    scanf("%d", &N);
    printf("%d\n", N);
    
    //выделение памяти на матрицу:
    int** matrix = (int**)malloc(N * sizeof(int*));
    for (int i=0; i<N; i++) {
        matrix[i] = (int*)malloc(N * sizeof(int));
    }
    
    printf("Введите элементы матрицы:\n");
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Исходная матрица:\n");
    printmatrix(matrix, N); /*вызов функции для вывода исходной матрицы*/
    printf("\n");
    
    newmatrix(matrix, N); /*вызов функции для анализирования матрицы*/
    
    printf("Измененная матрица:\n");
    printmatrix(matrix, N); /*и снова вывод матрицы, но уже обработанной*/
    
    //освобождение раннее выделенной памяти
    for (int i=0; i<N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}
//к сожалению код без выделения памяти не работал, так что я обратилась к интернету за помощью :(
