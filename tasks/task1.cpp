#include <iostream>
#include <cmath>

#include "../utils/func14-value-calculate.cpp" /*Импорт функции вычисления значения функции*/

int main() {
    double z, x, y;

    printf("Программа вычисляет значение функции y(x) и аргумента x");
    printf("\nФункция: y=cos(5x)+sin(x/5)+e^x");
    printf("\nДля определения значения аргумента x вводится вспомогательная переменная z");
    printf("\n\nИсполнитель: Новиков Д. А.");
    printf("\nВариант: №14");
    
    z = 0;
    x = (3 * pow(z, 3) - z) - 5; /*Вычисление значения x, при z=0*/
    y = func14ValueCalculate(x); /*Вычисление значения функции, при z=0*/

    printf("\n\nПри z=0:");
    printf("\nx=%.2lf", x);
    printf("\ny=%.2lf", y);

    while (true) {
        printf("\n\nВведите пожалуйста значение z, или для завершения работы программы 0: ");
        scanf("%lf", &z);

        if (z != 0) {
            if (z > 0) { /*Проверка z и вычисление х*/
                x = sqrt(z);
            } else {
                x = (3 * pow(z, 3) - z) - 5;
            }
            printf("\nx=%.2lf", x);
            
            y = func14ValueCalculate(x); /*Вычисление значения функции*/
            printf("\ny=%.2lf", y);
        } else break;
    };

    return 0;
}