/* Подвиг 7. Напишите программу, которая считывает из входного потока stdin вещественное число и выводит в консоль значение 1, 
    если число принадлежит диапазону [-5.45; 10.37], и 0 в противном случае.
P.S. Программу реализовать без применения условных операторов.
*/
#include <stdio.h>

int main(void)
{
    double d;
    scanf("%lf", &d);
    
    printf("%hhd", (-5.45 <= d) && (d <= 10.37));
 
    return 0;
}