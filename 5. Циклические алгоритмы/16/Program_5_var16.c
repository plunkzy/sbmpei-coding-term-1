//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №16: "Вывести все числа от A до B включительно (A <= B)."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int A, B;

    printf("Введите два целых числа A и B (A <= B): ");
    scanf("%d %d", &A, &B);

    if(A > B) {
        printf("Ошибка: A должно быть меньше или равно B.\n");
        return 1;
    }

    printf("Числа от %d до %d:\n", A, B);
    for(int i = A; i <= B; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
