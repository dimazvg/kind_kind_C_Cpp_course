/* Подвиг 11. Ниже в программе объявите вещественную переменную типа double. С помощью операции sizeof вычислите размер, 
который занимает эта переменная в памяти устройства. Результат сохраните в переменной res.
P.S. На экран ничего выводить не нужно.
*/
#include <stdlib.h>
#include <stddef.h>
int main(void)
{
    // здесь продолжайте программу
    double d = 0.0;
    size_t res = sizeof(d);
    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}