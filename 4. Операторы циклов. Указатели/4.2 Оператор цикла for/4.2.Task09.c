/* Подвиг 9 (на повторение). Напишите следующую программу. Из входного потока читаются цифры (от 1 до 9), пока не встретится число 0. 
На основе этих цифр сформировать единое число. Например, если на вход поступают цифры:
5 2 9 3 0
то должно формироваться число:
5293
Выведите полученное число в консоль.
Если цифра 0 встречается сразу (первая), то формируемая переменная должна принимать значение 0.
P.S. Программу следует реализовать с использованием только текущих знаний (без массивов).

Тесты: hhttps://github.com/selfedu-rus/c-tests/tree/main/4.2.9

Sample Input:
    1 2 3 8 5 4 0
Sample Output:
    123854
*/
#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    
    int res = 0;
    while (n != 0) {
        res = res * 10 + n;
        scanf("%d", &n);
    }
    
    printf("%d", res);
    
    return 0;
}