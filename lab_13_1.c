#include <stdio.h>
#include <string.h>
#define LIM 50 

//использую массив для хранения нескольких структур Bicycle
struct Bicycle { /*структура Bicycle*/
    char mcountry[LIM]; /*строка для страны производителя*/
    int speeds; /*целочисленное кол-во скоростей*/
    char type[LIM]; /*строка для вида*/
    double price; /*цена с плавающей точкой*/
};

int main() {
    struct Bicycle bicycles[LIM]; /*переменная типа Bicycle*/
    int count = 0; /*кол-во велосипедов*/
    
    char yn; /*строка с либо 'n'(no) либо 'y'(yes), обозначающая ответ на вопрос, хотите ли вы ввести данные об еще одном велосипеде*/
    do { /*цикл do...while выполняется пока yn = y и лимит не превышен*/
        printf("Введите данные для велосипеда %d:\n", count + 1);
        
        printf("Страна производитель: ...\n");
        scanf("%49[^\n]", bicycles[count].mcountry);
        
        printf("Количество скоростей: ...\n");
        scanf("%d", &bicycles[count].speeds);
        
        printf("Вид: ...\n");
        scanf("%49[^\n]", bicycles[count].type);
        
        printf("Цена: ...\n");
        scanf("%lf", &bicycles[count].price);
        
        count++; /*кол-во велосипедов увеличиваю на 1*/
        
        if (count<LIM) { 
            printf("Хотите добавить еще один велосипед? (y/n): "); /*задаю вопрос*/
            scanf(" %c", &yn);
            printf("%c\n", yn);
        } else { /*если лимит превышен, вывожу сообщение*/
            printf("Максимальное кол-во велосипедов достигнуто. \n");
            yn = 'n';
        } 
    } while (yn == 'y' && count < LIM);
        
    printf("   Введенные данные: \n"); /*вывод структуры*/
    for (int i=0; i<count; i++) { /*цикл для нужного кол-ва итераций*/
        printf("  Велосипед %d: \n", i+1);
        printf("Страна производитель: %s\n", bicycles[i].mcountry);
        printf("Количество скоростей: %d\n", bicycles[i].speeds);
        printf("Вид: %s\n", bicycles[i].type);
        printf("Цена: %.2f$\n", bicycles[i].price);
    }
    return 0;
}