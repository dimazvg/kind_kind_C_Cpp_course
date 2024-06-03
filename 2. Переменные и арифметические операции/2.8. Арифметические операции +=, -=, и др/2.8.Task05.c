/* Подвиг 5. Напишите программу, в которой вводятся два вещественных числа - ширина и длина прямоугольника, в одну строчку через пробел. 
Вычислите периметр этого прямоугольника и выведите в консоль сообщение в формате:
"Периметр: <число с точностью до десятых>"
Например, если периметр равен 12.56, то в консоли должна появиться строка (без кавычек):
"Периметр: 12.6"
*/
#include <stdio.h>

int main(void)
{
    double a, b;  // ширина и длина прямоугольника
    scanf("%lf%lf", &a, &b);
    
    double P = 2 * (a + b);
    
    printf("Периметр: %.1lf", P);
 
    return 0;
}