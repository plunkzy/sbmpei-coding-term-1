//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №17: "Ввести три действительных числа. Меньшее из чисел, принадлежащих интервалу (1, 7), заменить полусуммой остальных чисел".
// Опубликовано 23.03.2024
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double num1, num2, num3, min_in_range, sum;

    printf("Введите три действительных числа: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Находим наименьшее число в интервале (1, 7)
    min_in_range = 0;
    if (num1 > 1 && num1 < 7) {
        min_in_range = num1;
    }
    if (num2 > 1 && num2 < 7 && num2 < min_in_range) {
        min_in_range = num2;
    }
    if (num3 > 1 && num3 < 7 && num3 < min_in_range) {
        min_in_range = num3;
    }

    // Если есть число в интервале (1, 7), заменяем его на полусумму остальных
    if (min_in_range > 0) {
        sum = num1 + num2 + num3 - min_in_range;
        printf("Результат: %.2lf %.2lf %.2lf\n", (num1 == min_in_range) ? sum / 2 : num1,
               (num2 == min_in_range) ? sum / 2 : num2,
               (num3 == min_in_range) ? sum / 2 : num3);
    } else {
        printf("Ни одно число не принадлежит интервалу (1, 7)\n");
    }

    return 0;
}