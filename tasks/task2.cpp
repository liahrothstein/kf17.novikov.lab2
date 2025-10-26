#include <iostream>
#include <cmath>

#include "../utils/calcultate.cpp"

int main() {
    double number1, number2, result;
    char operation;

    printf("Программа может выполнять сложение, вычитание, умножение и деление двух чисел а и b\n");
    printf("А также вычисляет выражение a^b, и показывает результат\n");
    printf("\n\nИсполнитель: Новиков Д. А.");
    printf("\nВариант: №14");

    printf("\nПожалуйста введите первое число: ");
    scanf("%lf", &number1);
    
    printf("\nПожалуйста введите тип операции: ");
    scanf(" %c", &operation);

    printf("\nПожалуйста введите второе число: ");
    scanf("%lf", &number2);

    result = calculate(number1, operation, number2);

    if (!isError) {
        printf("\nРезультаты: a %c b = %.2lf; a^b = %.2lf\n", operation, result, pow(number1, number2));
    };

    return 0;
}