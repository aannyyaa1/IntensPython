#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3; /*ввожу вещественные переменные*/
    cout << "Введите координаты вектора A(x1, y1): ";
    cin >> x1 >> y1;
    cout << "(" << x1 << ", " << y1 << ")" << endl;
    
    cout << "Введите координаты вектора B(x2, y2): ";
    cin >> x2 >> y2;
    cout << "(" << x2 << ", " << y2 << ")" << endl;
    
    cout << "Введите координаты вектора C(x3, y3): ";
    cin >> x3 >> y3;
    cout << "(" << x3 << ", " << y3 << ")" << endl;

/*векторы коллинеарны, если их координаты пропорцинальны*/
    if ((x1 / x2 == y1 / y2 ) && (x2 / x3 == y2 / y3)) {/*проверяю это*/
        cout << "Векторы коллинеарны" << endl;
    } else {
        cout << "Векторы не коллинеарны" << endl;
    }
    return 0;
}