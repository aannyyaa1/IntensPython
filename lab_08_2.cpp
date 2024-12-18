#include <iostream> 
using namespace std;

void swapquaters(int** matrix, int M, int N) { /*функция перестановки четвертей матрицы*/
    int Mq = M/2; /*делю кол-во строк пополам чтобы узнать сколько строк в четверти*/
    int Nq = N/2; /*аналогично со столбцами*/
    for (int i=0; i<Mq; i++) { /*перебор строк*/
        for (int j=0; j<Nq; j++) { /*перебор столбцов*/
            int A = matrix[i][j]; /*временно присваиваю переменной значения элементов из верхней левой четверти*/
            matrix[i][j] = matrix[i+Mq][j+Nq]; /*присваиваю им значения из правой нижней четверти*/
            matrix[i+Mq][j+Nq] = A; /*соответственно для правой нижней*/
        } /*в общем меняю их местами*/
    }
}

void printmatrix(int** matrix, int M, int N) { /*функция вывода матрицы*/
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cout<<matrix[i][j]<<" ";
        } cout<<endl;
    } 
}

int main() {
    int M, N;
    cout<<"Введите кол-во строк M (четное): ";
    cin>>M;
    cout<<M<<endl;
    cout<<"Введите кол-во столбцов N (четное): ";
    cin>>N;
    cout<<N<<endl;
    
    //выделение памяти на матрицу:
    int** matrix = new int*[M];
    for (int i=0; i<M; i++) {
        matrix[i] = new int(N);
    }
    
    cout<<"Введите элементы матрицы: "<<endl;
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cin>>matrix[i][j];
        } 
    }
    
    cout<<"Исходная матрица:"<<endl;
    printmatrix(matrix, M, N); /*вывод исходной матрицы*/
    
    swapquaters(matrix, M, N); /*вызов функции обмена четвертей*/
    
    cout<<"Измененная матрица:"<<endl;
    printmatrix(matrix, M, N); /*снова вывод, но уже обработанной матрицы*/
    
    //освобождение раннеее выделенной памяти:
    for (int i=0; i<M; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
    
    
    
}
