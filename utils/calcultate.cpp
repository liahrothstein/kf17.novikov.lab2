#include <iostream>

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