/* Подвиг 10. Напишите программу, которая читает из входного потока радиус окружности R (вещественное число) 
и вычисляет длину этой окружности по формуле:
    length = 2 * pi * R
Результат вывести в консоль в виде вещественного числа с точностью до тысячных.
P.S. Константу pi возьмите равной 3.1415.
*/
#include <stdio.h>

int main(void)
{
    double R;
    scanf("%lf", &R);
    double PI = 3.1415;

    double length = 2 * PI * R;
    
    printf("%.3lf", length);
    
    return 0;
}