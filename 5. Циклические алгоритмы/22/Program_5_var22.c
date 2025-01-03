//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №22: "Вывести на экран все двузначные числа."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    printf("Все двузначные числа:\n");
    for(int i = 10; i <= 99; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
