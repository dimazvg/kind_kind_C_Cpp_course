/* Подвиг 7. Продолжите программу, в которой из стандартного входного потока с помощью функции scanf() необходимо прочитать данные 
по следующей схеме:
    <целое число>, <целое число>, <пропуск вещественного числа>, <вещественное число>
То есть, третье значение заносить в переменную не нужно, оно должно пропускаться. 
Вывести прочитанные значения с помощью функции printf() в одну строчку через пробел в порядке считывания. 
Вещественные числа отображать с точностью до сотых.
Sample Input:
    56483, 1234, -4.5, 17.534
Sample Output:
    56483 1234 17.53
*/
#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int a, b;
    double d;
    scanf("%d, %d, %*f, %lf", &a, &b, &d);
    printf("%d %d %.2lf", a, b, d);

    return 0;
}