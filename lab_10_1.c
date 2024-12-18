#include <stdio.h>
#define LIM 30

int localmin(int A[], int size) { /*функция возвращает максимальный из локальных минимумов*/
    int maxlocalmin = -(10^9); /*минимальный int*/
    if (size>=3) { /*если размер массива больше 2*/
        for (int i=1; i<size-1; i++) { /*рассматриваю все элементы массива, кроме первого и последнего*/
            if (A[i] < A[i+1] && A[i] < A[i-1]) { /*если A[i] меньше своих соседей*/
                if (A[i] > maxlocalmin) { /*и при этом меньше заданной переменной maxlocalmin*/
                    maxlocalmin = A[i]; /*то присваиваю этой переменной значение элемента массива A[i]*/
                }
            }
        }
    } else { /*если размер меньше 3*/
        return -(10^9); /*возвращаю минимальный int*/
    } return maxlocalmin; /*результат работы функции*/
}

int main() {
    int N, A[LIM]; /*массив А с ограниченным размером 30*/
    printf("Введите размер массива (N): ");
    scanf("%d", &N);
    printf("%d\n", N);
    
    printf("Введите элементы массива: ");
    for (int i=0; i<N; i++) {
        scanf("%d", &A[i]);
        printf("%d ", A[i]);
    } printf("\n");
    
    int maxlocalmin = localmin(A, N); /*вызов функции для заданных переменных*/
    printf("Максимальный локальный минимум массива: %d", maxlocalmin);
    
    return 0;
}



