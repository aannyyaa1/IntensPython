#include <iostream> 
#define LIM 30
using namespace std;

struct result { /*структура для хранения результатов функции greaterelements*/
    int* num = nullptr; /*массив с номерами элементов (пустой)*/
    int count = 0; /*кол-во этих элементов*/
};

result greaterelements(int A[], int size) { /*функция для нахождения номеров элементов и их кол-ва*/
    result result; /*переменная result типа result*/
    
    if (size < 2) { /*если в массиве меньше двух элементов, то возвращается пустая структура result*/
        return result;
    }
    
    int capacity = 0; /*счетчик для текущего размера массива result.num*/
    
    for (int i=0; i<size-1; i++) { /*перебор элементов массива, кроме последнего, т.к. у него нет соседа справа*/
        if (A[i] > A[i+1]){ /*если элемент больше правого соседа*/
            int* temp = new int[capacity+1]; /*то создаю временный массив на 1 элемент больше чем result.num*/
            for (int j=0; j<capacity; j++) { /*копирую все элементы из старого массива в новый*/
                temp[j] = result.num[j];
            } delete[] result.num; /*освобождаю раннее выделенную память*/
            
            result.num = temp; /*указатель теперь указывает на новый массив temp*/
            result.num[capacity] = i+1; /*в конец добавляю номер текущего элемента*/
            result.count++; /*счетчик элемента больше на 1*/
            capacity++; /*счетчик размера массива больше на 1*/
        }
    } return result; /*возвращаю структуру result*/
}

int main() {
    int N, A[LIM];
    cout<<"Введите размер массива (N): ";
    cin>>N;
    cout<<N<<endl;
    
    cout<<"Введите элементы массива: ";
    for (int i=0; i<N; i++) {
        cin>>A[i];
        cout<<A[i];
    } cout<<endl;
    
    result result = greaterelements(A, N); /*вызов функции greaterelements, результат сохраняется в result*/
    
    cout<<"Номера элементов, которые больше своего правого соседа: ";
    for (int i=0; i<result.count; i++) {
        cout<<result.num[i]<<" ";
    } cout<<endl;
    
    cout<<"Количество таких элементов: "<<result.count<<endl;
    
    delete[] A;
    delete[] result.num; /*освобождение памяти*/
    
    return 0;
}