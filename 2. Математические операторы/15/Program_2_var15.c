//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №15: "Вычислить значение выражения для введённого Х". Выражение: (|x*ln(x)-4/7|*sqrt(x))/(sqrt5(e^(4x-1,1))), где sqrt5 - корень пятой степени. Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
// Опубликовано 28.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x;
    printf("Введите значение X: ");
    scanf("%lf", &x);

    if (x > 0) {
        double numerator = fabs(x * log(x) - 4.0/7.0) * sqrt(x);
        double exponent = 4.0 * x - 1.1;
        double denominator = pow(M_E, exponent);
        denominator = pow(denominator, 1.0/5.0);
        if (denominator != 0.0) {
            double result = numerator / denominator;
            printf("Результат: %lf\n", result);
            getchar();
        } else {
            printf("Ошибка: деление на 0 невозможно!'.\n");
            getchar();
        }
    } else {
        printf("Ошибка: X может быть только положительным.\n");
        getchar();
    }

    return 0;
}