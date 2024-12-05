#include <stdio.h>
#include <math.h>
/*вписанной: r=S/p; (ab)/(a+b+c)
описанной: R=(abc)/(4*S); (c/2)*/
/*a,b,c-стороны,S-площадь,p-полупериметр,r и R - радиусы вписанной и описанной окружностей.*/
int main() {
    float a,b,c,S,p,r,R; /*ввожу вещественные переменные*/
    printf("Программа вычисления r и R треугольника по заданным параметрам\n");
    printf("Введите  стороны треугольника a, b и c и площадь S\n");
    scanf("%f %f %f %f",&a,&b,&c,&S);
    r = S/((a+b+c)/2);
    R = (a*b*c)/(4*S);
    printf("r = %6.2f\n",r); /*вещественное число будет выводится с шестью знаками перед запятой и двумя после*/
    printf("R = %6.2f\n",R);
}

