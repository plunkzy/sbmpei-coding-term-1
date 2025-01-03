//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №19: "Ввести три натуральных числа a, b, c. Расположить эти числа в порядке убывания: a ≤ b ≤ c."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b, c, temp;

    printf("Введите три натуральных числа (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Сортировка чисел в порядке возрастания
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Результат: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
