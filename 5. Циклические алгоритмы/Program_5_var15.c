//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №15 (условие смотрите в сборнике).
// Опубликовано 28.11.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N;

    printf("Введите N (в сантиметрах): ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N должно быть не менее 1.\n");
    } else {
        printf("Сантиметры   |    Дюймы\n");
        printf("-------------------------\n");

        for (int cm = 1; cm <= N; cm++) {
            double inches = cm / 2.54;
            printf("%7d см   |   %7.2f дюймов\n", cm, inches);
        }
    }

    return 0;
}