#include <iostream>
using namespace std;

int main() {
    int suit;
    cout << "Введите порядковый номер масти от 1 до 4: "; /*вывод сообщения*/
    cin >> suit;
    cout << suit << endl; /*сообщение с добавленной переменной*/
    
    switch (suit) { /*оператор множественного выбора*/
        case 1: cout << "Название соответствующей масти: пики"; break;
        case 2: cout << "Название соответствующей масти: трефы"; break;
        case 3: cout << "Название соответствующей масти: бубны"; break;
        case 4: cout << "Название соответствующей масти: червы"; break;
        default: cout << "Введено значение вне диапазона от 1 до 4";
    }
}