#include <iostream>
#include <cmath>

bool isError = false;

double calculate(double num1, char op, double num2) {
    switch (op) {
        case '+' :
            return (num1 + num2);
        case '-' :
            return (num1 - num2);
        case '*' :
            return (num1 * num2);
        case '/' :
            if (num2 != 0) {
                return (num1 / num2);
            } else {
                printf("Ошибка: деление на ноль\n");
                isError = true;

                return 0;
            }
            default:
                printf("Ошибка: неизвестный оператор\n");
                isError = true;

                return 0;
    }
};

int main() {
    double number1, number2, result;
    char operation;

    printf("Программа может выполнять сложение, вычитание, умножение и деление двух чисел а и b\n");
    printf("А также вычисляет выражение a^b, и показывает результат\n");

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