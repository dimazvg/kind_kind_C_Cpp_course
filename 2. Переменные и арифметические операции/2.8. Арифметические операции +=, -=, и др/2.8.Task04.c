/* Подвиг 4. Напишите программу, в которой выполняется чтение двух целочисленных значений, записанных в одну строчку через пробел, 
затем, первая переменная (первое прочитанное значение) увеличиваются в 3 раза, вторая - уменьшается на 10 и 
полученные значения перемножаются. 
Выведите полученный результат в консоль в виде одного целого числа.
*/
#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    
    n1 *= 3;
    n2 -= 10;
    int res = n1 * n2;
    
    printf("%d", res);
 
    return 0;
}