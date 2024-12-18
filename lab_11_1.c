#include <stdio.h>
#define LIM 30

int f_maxofmins(int matrix[][100], int M, int N) { /*функция для нахождения макисмального среди минимальных элементов массива*/
    int maxofmins = -(10^9); /*наименьший int*/
    
    for (int i=0; i<M; i++) { /*прохожу по каждой строке*/
        int mininrow = 10^9; /*наибольший int*/
        for (int j=0; j<N; j++) { /*прохожу по всем элементам строки*/
            if (matrix[i][j] < mininrow) { /*если элемент меньше mininrow*/
                mininrow = matrix[i][j]; /*присваю его значение минимальному*/
            }
        } if (mininrow > maxofmins) 
            maxofmins = mininrow; /*если минимальный элемент строки больше maxofmins, переприсваиваю его значение*/
        }
    } return maxofmins; /*возвращаю максимальный среди минимальных*/
}

int main() {
    int M, N;
    printf("Введите кол-во строк (M): ");
    scanf("%d", &M);
    printf("%d\n", M);
    
    printf("Введите кол-во столбцов (N): ");
    scanf("%d", &N);
    printf("%d\n", N);
    
    int matrix[M][100];
    
    printf("Введите элементы матрицы: ");
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            scanf("%d", &matrix[i][j]);
            printf("%d ", matrix[i][j]);
        }
    } printf("\n");
    
    int maxofmins = f_maxofmins(matrix, M, N); /*вызов функции*/
    
    printf("Максимальный среди минимальных элементов матрицы: %d", maxofmins);
    
    return 0;
}

