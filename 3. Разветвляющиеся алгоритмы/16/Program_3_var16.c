//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №16: "Заменить меньшее из трех введенных чисел их полусуммой, а большее – их удвоенным произведением".
// Опубликовано 23.03.2024
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double num1, num2, num3, min_num, max_num, sum, product;

    printf("Введите три числа: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Находим наименьшее и наибольшее число
    min_num = num1;
    max_num = num1;

    if (num2 < min_num)
        min_num = num2;
    if (num3 < min_num)
        min_num = num3;

    if (num2 > max_num)
        max_num = num2;
    if (num3 > max_num)
        max_num = num3;

    // Вычисляем сумму и произведение чисел
    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;

    // Заменяем меньшее число полусуммой, а большее - удвоенным произведением
    printf("Результат:\n");
    printf("%.2lf %.2lf %.2lf\n", (num1 == min_num) ? sum / 2 : (num1 == max_num) ? 2 * product : num1,
           (num2 == min_num) ? sum / 2 : (num2 == max_num) ? 2 * product : num2,
           (num3 == min_num) ? sum / 2 : (num3 == max_num) ? 2 * product : num3);

    return 0;
}