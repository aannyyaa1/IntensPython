#include <stdio.h>
#include <string.h>
#define LIM 50 

struct Train { /*структура Train*/ 
    char destination[LIM]; /*строка для пункта назначения*/
    int trainnum; /*целочисленный номер поезда*/
    char dtime[6]; /*строка для времени типа чч:мм*/
};

int main() {
    struct Train train; /*переменная типа Train*/
    
    printf("Введите пункт назначения: "); /*вывод сообщений*/
    scanf("%[^\n]", train.destination);
    printf(train.destination);
    printf("\n");
    
    printf("Введите номер поезда: ");
    scanf("%d", &train.trainnum);
    printf("%d", train.trainnum);
    printf("\n");
    
    printf("Введите время отправления: ");
    scanf("%s", train.dtime);
    printf(train.dtime);
    printf("\n");
    printf("\n");
    
    printf("Введенные данные:\n"); /*вывод структуры*/
    printf("Название пункта назначения: %s\n", train.destination);
    printf("Номер поезда: %d\n", train.trainnum);
    printf("Время отправления: %s\n", train.dtime);
    
    return 0;
}



