#include <iostream> 
using namespace std;

//Дана матрица размера 𝑀 × 𝑁. Для каждого столбца матрицы найти произведение четных его элементов.

void calculateproduct(int** matrix, int M, int N) { /*функция вычисляет и выводит произведение четных чисел для каждого столбца матрицы*/
    for (int j=0; j<N; j++) { /*перебор каждого столбца*/
        long long product = 1; /*переменная для будущих произведений*/
        bool flag = false; /*флаг обозначает наличие четных элементов в столбце*/
        
        for (int i=0; i<M; i++) { /*перебор строк*/
            if (matrix[i][j]%2 == 0) { /*если текущий элемент четный*/
                product *= matrix[i][j]; /*умножаем на него product*/
                flag = true; /*флаг становится равен true*/
            }
        } cout<<"Произведение четных элементов столбца "<<j+1<<": "; /*вывод сообщения*/
        if (flag == true) { /*если четные элементы встречались*/
            cout<<product<<endl; /*то выводим произведение*/
        } else { /*а если нет, то сообщение о том, что их нет*/
            cout<<"Четных элементов в столбце нет"<<endl;
        }
    }
}

int main() {
    int M, N;
    cout<<"Введите количество строк (M): ";
    cin>>M;
    cout<<M<<endl;
    
    cout<<"Введите количество столбцов (N): ";
    cin>>N;
    cout<<N<<endl;
    
    //выделение памяти
    int** matrix = new int*[M];
    for (int i=0;i<M; i++) {
        matrix[i] = new int[N];
    }
    
    cout<<"Введите элементы матрицы: ";
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cin>>matrix[i][j];
            cout<<matrix[i][j]<<" ";
        }
    } cout<<endl;
    
    calculateproduct(matrix, M, N); /*вызов функции подсчета и печати*/
    
    //освобождение памяти
    for (int i=0; i<M; i++) {
        delete[] matrix[i];
    } delete[] matrix;
    
    return 0;
}