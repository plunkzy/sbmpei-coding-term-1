//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №3: "Если хотя бы два числа из трех введенных чисел положительны, то уменьшить каждое нечетное число на 1, иначе – найти сумму всех чисел".
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    int positiveCount = 0;
    positiveCount += (a > 0) ? 1 : 0;
    positiveCount += (b > 0) ? 1 : 0;
    positiveCount += (c > 0) ? 1 : 0;

    if (positiveCount >= 2) {
        if (a % 2 != 0) a--;
        if (b % 2 != 0) b--;
        if (c % 2 != 0) c--;
        printf("Измененные числа: %d %d %d\n", a, b, c);
    } else {
        printf("Сумма чисел: %d\n", a + b + c);
    }

    return 0;
}
