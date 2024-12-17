#include <iostream> 
#include <cmath>
using namespace std;

struct polarcoordinates { /*структура для хранения полярных координат*/
    double r; /*радиус*/
    double rad; /*угол в радианах*/
};

polarcoordinates topolar(double x, double y) { /*функция для преобразования прямоугольных коориднат в полярные*/
    polarcoordinates polar; /*создаю переменную структуры*/
    polar.r = sqrt(pow(x,2) + pow(y,2)); /*нахожу радиус*/
    polar.rad = atan2(y,x); /*и угол*/
    
    return polar; /*возвращаю структуру*/
}

int main() {
    double x, y;
    cout<<"Введите координату x: ";
    cin>>x;
    cout<<x<<endl;
    
    cout<<"Введите координату y: ";
    cin>>y;
    cout<<y<<endl;
    
    polarcoordinates polarcrd = topolar(x,y); /*преобразовываю введенные координаты в полярные*/
    
    cout<<"Полярные координаты:"<<endl;
    cout<<"Радиус (r): "<<polarcrd.r<<endl;
    cout<<"Угол в радианах: "<<polarcrd.rad<<endl; /*угол в радианах*/
    cout<<"Угол в градусах: "<<polarcrd.rad*180/M_PI<<endl; /*угол в градусах*/
    
    return 0;
    
}