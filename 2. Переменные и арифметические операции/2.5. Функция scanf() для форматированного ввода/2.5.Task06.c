/* Подвиг 6. Продолжите программу, в которой из стандартного входного потока с помощью функции scanf() необходимо прочитать 
    два целых числа (в диапазоне [-16000; 16000]), записанных через точку с запятой. 
Вывести прочитанные значения с помощью функции printf() в одну строчку через пробел в порядке считывания.
Sample Input:
    -16000; 16000
Sample Output:
    -16000 16000
*/
#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int a, b;
    scanf("%d; %d", &a, &b);
    printf("%d %d", a, b);
    
    return 0;
}