/* Подвиг 9. Напишите программу, которая читает из входного потока сторону равностороннего треугольника длиной a 
    (целое число в диапазоне [1; 100]) 
и вычисляет радиус вписанной в него окружности по формуле:
    r = корень(3) * a / 6
Результат вывести в консоль в виде вещественного числа с точностью до тысячных.
P.S. Корень из трех возьмите равным 1.732.
*/
#include <stdio.h>

int main(void)
{
    int a; // сторона равностороннего треугольника

    scanf("%d", &a);

    double r = 1.732 * a / 6;
    printf("%.3lf", r);
    
    return 0;
}