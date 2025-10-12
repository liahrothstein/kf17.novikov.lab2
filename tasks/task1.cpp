#include <iostream>
#include <cmath>

#include "../utils/func-value-calculate.cpp"

int main() {
    double z, x, y;

    printf("Программа вычисляет значение функции y(x) и аргумента x");
    printf("\nФункция: y=cos(5x)+sin(x/5)+e^x");
    printf("\nДля определения значения аргумента x вводится вспомогательная переменная z");
    
    while (true) {
        printf("\n\nВведите пожалуйста значение z, или для завершения работы программы 0: ");
        scanf("%lf", &z);

        if (z != 0) {
            if (z > 0) {
                x = sqrt(z);
            } else {
                x = (3 * pow(z, 3) - z) - 5;
            }
            printf("\nx=%.2lf", x);
            
            y = funcValueCalculate(x);
            printf("\ny=%.2lf", y);
        } else break;
    };

    return 0;
}