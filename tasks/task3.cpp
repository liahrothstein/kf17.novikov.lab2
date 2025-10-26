#include <iostream>
#include <cmath>

#include "../utils/func9-value-calculate.cpp"
#include "../utils/func10-value-calculate.cpp"
#include "../utils/func7-value-calculate.cpp"
#include "../utils/func5-value-calculate.cpp"
#include "../utils/func14-value-calculate.cpp" /*Импорт функций вычисления значения функции*/

int main() {
    int funcNum;
    double z, x, y;
    const double b = 2, c = 6, d = 2.5, k = -3; /*Задание значений параметров (констант)*/

    printf("Программа вычисляет значение функции y(x) и аргумента x");
    printf("\nНомера функций: 14, 5, 7, 10, 9");
    printf("\nДля определения значения аргумента x вводится вспомогательная переменная z");
    printf("\n\nИсполнитель: Новиков Д. А.");
    printf("\nВариант: №14");
    
    while (true) {
        printf("\n\nВведите пожалуйста номер функции, или для завершения работы программы 0: ");
        scanf("%d", &funcNum);

        if (funcNum != 0) {
            switch (funcNum) {
                case 14 :
                    printf("\n\nФункция №%d y=cos(5x)+sin(x/5)+e^x", funcNum);
                
                    z = 0;
                    x = (3 * pow(z, 3) - z) - 5; /*Вычисление значения x, при z=0*/
                    y = func14ValueCalculate(x); /*Вычисление значения функции, при z=0*/
                
                    printf("\nПри z=0:");
                    printf("\nx=%.2lf", x);
                    printf("\ny=%.2lf", y);
                
                    while (true) {
                        printf("\n\nВведите пожалуйста значение z, или для выбора другой функции 0: ");
                        scanf("%lf", &z);
                    
                        if (z != 0) {
                            if (z > 0) { /*Проверка z и вычисление х*/
                                x = sqrt(z);
                            } else {
                                x = (3 * pow(z, 3) - z) - 5;
                            }
                            printf("\nx=%.6lf", x);
                        
                            y = func14ValueCalculate(x); /*Вычисление значения функции*/
                            printf("\ny=%.6lf", y);
                        } else break;
                    };
                    break;
                case 5:
                    printf("\n\nФункция №%d y=ln(x+0.5)+(e^(x)-e^(-x))", funcNum);
                
                    z = 0;
                    x = fabs(z); /*Вычисление значения x, при z=0*/
                    y = func5ValueCalculate(x); /*Вычисление значения функции, при z=0*/
                
                    printf("\nПри z=0:");
                    printf("\nx=%.2lf", x);
                    printf("\ny=%.2lf", y);
                
                    while (true) {
                        printf("\n\nВведите пожалуйста значение z, или для выбора другой функции 0: ");
                        scanf("%lf", &z);
                    
                        if (z != 0) {
                            if (z < -1) { /*Проверка z и вычисление х*/
                                x = -z / 3;
                            } else {
                                x = fabs(z);
                            }
                            printf("\nx=%.6lf", x);
                        
                            y = func5ValueCalculate(x); /*Вычисление значения функции*/
                            printf("\ny=%.6lf", y);
                        } else break;
                    };
                    break;
                case 7:
                    printf("\n\nФункция №%d y=(sin(c*x+d^(2)+k*x^2))^3", funcNum);
                    printf("\nc=%.2lf d=%.2lf k=%.2lf", c, d, k);
                
                    z = 0;
                    x = pow(z, 3); /*Вычисление значения x, при z=0*/
                    y = func7ValueCalculate(x, c, d, k); /*Вычисление значения функции, при z=0*/
                
                    printf("\nПри z=0:");
                    printf("\nx=%.2lf", x);
                    printf("\ny=%.2lf", y);
                
                    while (true) {
                        printf("\n\nВведите пожалуйста значение z, или для выбора другой функции 0: ");
                        scanf("%lf", &z);
                    
                        if (z != 0) {
                            if (z < 0) { /*Проверка z и вычисление х*/
                                x = pow(z, 2) - z;
                            } else {
                                x = pow(z, 3);
                            }
                            printf("\nx=%.6lf", x);
                        
                            y = func7ValueCalculate(x, c, d, k); /*Вычисление значения функции*/
                            printf("\ny=%.6lf", y);
                        } else break;
                    };
                    break;
                case 10:
                    printf("\n\nФункция №%d y=(e^(sin(x)^3) + ln(x + 1)) / √(x)", funcNum);
                
                    z = 0;
                    x = pow(z, 2) + 1; /*Вычисление значения x, при z=0*/
                    y = func10ValueCalculate(x); /*Вычисление значения функции, при z=0*/
                
                    printf("\nПри z=0:");
                    printf("\nx=%.2lf", x);
                    printf("\ny=%.2lf", y);
                
                    while (true) {
                        printf("\n\nВведите пожалуйста значение z≠1, или для выбора другой функции 0: ");
                        scanf("%lf", &z);
                    
                        if (z != 0) {
                            if (z < 1) { /*Проверка z и вычисление х*/
                                x = pow(z, 2) + 1;
                            } else {
                                if (z != 1) {
                                    x = z - 1;
                                } else {
                                    printf("\nОшибка: при z=1 происходит деление на ноль");
                                    continue;
                                }
                            }
                            printf("\nx=%.6lf", x);
                        
                            y = func10ValueCalculate(x); /*Вычисление значения функции*/
                            printf("\ny=%.6lf", y);
                        } else break;
                    };
                    break;
                case 9:
                    printf("\n\nФункция №%d y=(1/cos(x))+ln|tg(x/2)|", funcNum);
                
                    while (true) {
                        printf("\n\nВведите пожалуйста значение z, или для выбора другой функции 0: ");
                        scanf("%lf", &z);
                    
                        if (z != 0) {
                            if (z <= 0) { /*Проверка z и вычисление х*/
                                x = pow(z, b) + fabs(b / 2);
                            } else {
                                x = sqrt(z);
                            }
                            printf("\nx=%.6lf", x);

                            if (fabs(cos(x)) < 1e-12) { /*Проверки аргумента для определения точки разрыва*/
                                printf("\nОшибка: cos(x)=0, функция не определена");
                                continue;
                            };
                            if (fabs(tan(x / 2)) < 1e-12) {
                                printf("\nОшибка: tg(x/2)=0, логарифм не определён");
                                continue;
                            };
                            if (fabs(cos(x / 2)) < 1e-12) {
                                printf("\nОшибка: tg(x/2) не существует");
                                continue;
                            };
                        
                            y = func9ValueCalculate(x); /*Вычисление значения функции*/
                            printf("\ny=%.6lf", y);
                        } else break;
                    };
                    break;
                default:
                    printf("\nОшибка: неизветсный номер функции");
                    continue;
            };
        } else break;
    };

    return 0;
}