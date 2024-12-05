#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*функция вычисления суммы цифр числа*/
int sumdigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

/*функция вычисления произведения цифр числа*/
int productdigits(int n) {
    int product = 1;
    if (n == 0) return 0;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

/*функция разложения числа на простые множители*/
string primefactors(int n) {
    int d = 2; /*наименьший простой делитель*/
    string output = ""; 
    while (n > 1) {
        int k = 0; /*кратность переменной d, в дальнейшем - ее степень*/
        while ((n % d) == 0) {
            ++k;
            n /= d; 
        }
        if (k > 0) {
            if (output.length() > 0) output += " * "; /*если в строке есть множитель - добавляю "*" */
            output += to_string(d); /*добавляю к строке преобразованую d*/
            if (k > 1) output += "^" + to_string(k); /*добавляю степень k если k > 1*/
        }
        ++d;
    }
    return output;
}

int main() {
    int num;
    cout << "Введите четырехзначное число: "; 
    cin >> num;
    cout << num << endl;
    
    if (num < 1000 || num > 9999) {
        cout << "Ошибка: число не является четырехзначным." << endl;
        return 1;
    }
    
    cout << "Сумма цифр: " << sumdigits(num) << endl;
    cout << "Произведение цифр: " << productdigits(num) << endl;
    cout << "Разложение на простые множители: " << primefactors(num) << endl;
    
    return 0;
}
