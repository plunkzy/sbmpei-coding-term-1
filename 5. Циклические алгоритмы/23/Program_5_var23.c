//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №23: "Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые числа, расположенные между A и B (не включая числа A и B)."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int A, B;

    printf("Введите два целых числа A и B (A < B): ");
    scanf("%d %d", &A, &B);

    if(A >= B) {
        printf("Ошибка: A должно быть меньше B.\n");
        return 1;
    }

    printf("Числа между %d и %d в порядке убывания:\n", A, B);
    for(int i = B - 1; i > A; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
