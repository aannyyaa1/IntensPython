#include <iostream> 
#include <string>
using namespace std;

struct Dictaphone { /*струткруа Dictaphone*/
    string mcountry; /*строка страны производителя*/
    int memorycap; /*целочисленный объем памяти*/
    int recmodnum; /*целочисленное число режимов записи*/
    double price; /*цена с плавающей точкой*/
};

int main() {
    Dictaphone dict; /*переменная типа Dictaphone*/
    
    cout<<"Введите страну производителя: "; /*вывод сообщений*/
    cin>>dict.mcountry;
    cout<<dict.mcountry<<endl;
    
    cout<<"Введите объем памяти: ";
    cin>>dict.memorycap;
    cout<<dict.memorycap<<endl;
    
    cout<<"Введите число режимов записи: ";
    cin>>dict.recmodnum;
    cout<<dict.recmodnum<<endl;
    
    cout<<"Введите цену: ";
    cin>>dict.price;
    cout<<dict.price<<endl;
    cout<<endl;
    
    cout<<"Введенные данные:"<<endl; /*вывод структуры*/
    cout<<"Страна производитель: "<<dict.mcountry<<endl;
    cout<<"Объем памяти: "<<dict.memorycap<<" MB"<<endl;
    cout<<"Число режимов записи: "<<dict.recmodnum<<endl;
    cout<<"Цена: "<<dict.price<<"$"<<endl;
    
    return 0;
    
}