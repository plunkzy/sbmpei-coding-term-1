//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №23: "Ввести четыре числа. Определить, сколько из них находится в диапазоне [4, 5]."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2, num3, num4;
    int count = 0;

    printf("Введите первое число: ");
    scanf("%d", &num1);
    if(num1 >= 4 && num1 <= 5) {
        count++;
    }

    printf("Введите второе число: ");
    scanf("%d", &num2);
    if(num2 >= 4 && num2 <= 5) {
        count++;
    }

    printf("Введите третье число: ");
    scanf("%d", &num3);
    if(num3 >= 4 && num3 <= 5) {
        count++;
    }

    printf("Введите четвертое число: ");
    scanf("%d", &num4);
    if(num4 >= 4 && num4 <= 5) {
        count++;
    }

    printf("Количество чисел в диапазоне [4, 5]: %d\n", count);

    return 0;
}
