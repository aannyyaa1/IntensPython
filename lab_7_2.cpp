#include <iostream> 
#define LIM 30
using namespace std;

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
    cout<<"Введите Размер массива (N): ";
    cin>>N;
    cout<<N<<endl;
    
    cout<<"Введите элементы массива: ";
    for (int i=0; i<N; i++) {
        cin>>A[i];
        cout<<A[i]<<" ";
    } cout<<endl;
    
    int maxlocalmin = localmin(A, N); /*вызов функции для заданных переменных*/
     cout<<"Максимальный из локальных минимумов массива: "<<maxlocalmin<<endl;
     
     return 0;
}