#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, sum, percent = 0.03; /*инициализация переменных*/
    int n;
    
    cout<<"Введите начальную сумму вклада (S): "; /*вывод сообщения*/
    cin>>S;
    cout<<S<<endl;
    
    cout<<"Введите количество лет (n): "; /*вывод сообщения*/
    cin>>n;
    cout<<n<<endl;

    sum = S*pow(1+percent, n); /*расчет суммы вклада через n лет*/
    cout<<"Сумма вклада через "<<n<<" лет: "<<sum<<endl; /*вывод ответа*/

    return 0;
}