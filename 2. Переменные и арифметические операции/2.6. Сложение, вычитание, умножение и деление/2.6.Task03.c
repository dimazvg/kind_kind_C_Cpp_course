/* Подвиг 3. Продолжите программу, в которой выполняется вычисление значения:
    6 * (1/3)^2 - 15 * 1/3
Результат выведите в консоль с точностью до сотых.
*/
#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    double res = 6 * (1.0 / 3) * (1.0 / 3) - 15 * 1.0 / 3;
    printf("%.2lf", res);

    return 0;
}