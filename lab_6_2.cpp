#include <iostream> 
#include <cmath>
using namespace std;

/*Для заданного значения 𝑛 > 0 вычислить значение факториала числа (2𝑛 + 1)!.*/
int main() {
    int n;
    long long fact = 1; /*long long для вычисления больщих значений*/
    
    cout<<"Введите n > 0: "; 
    cin>>n;
    cout<<n<<endl;
    
    cout<<"Значение факториала числа (2n + 1)!: ";
    
    int num = (2*n + 1); /*значение для которого буду вычислять факториал*/
    int i = 1; /*счетчик*/
    
    do {
        fact *= i; 
        i++; /*факториал умножается на счетчик i, пока i не станет равно значению num*/
    } while (i<=num);
    cout<<fact<<endl;
    return 0;
}