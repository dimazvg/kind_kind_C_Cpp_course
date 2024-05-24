/* Подвиг 4. Продолжите программу, в которой определена макро-функция с именем GIPOT, 
вычисляющая длину гипотенузы по двум катетам прямоугольного треугольника. 
Вызовите макрос GIPOT для величин a+3 и b-2. Результат вызова сохраните в переменной length. 
Выведите в консоль значение переменной length с точностью до сотых.
Напомню, что длина гипотенузы вычисляется по формуле: c = квадратный_корень(a^2 + b^2).
*/
// не забываем компилировать с флагом -lm в Linux
#include <stdio.h>
#include <math.h>

// здесь объявляйте макро-функцию
#define GIPOT(A, B)    (sqrt((A)*(A) + (B)*(B)))

int main(void)
{
    int a, b;
    if(scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }

    // здесь продолжайте программу
    double length = GIPOT(a + 3, b - 2);
    
    printf("%.2lf", length);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}