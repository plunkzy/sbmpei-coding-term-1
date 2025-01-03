//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №24 (условие смотрите в сборнике).
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int A;

    printf("Введите цену 1 кг конфет (A, 1 <= A <= 100): ");
    scanf("%d", &A);

    if(A < 1 || A > 100) {
        printf("Ошибка: A должно быть в диапазоне от 1 до 100.\n");
        return 1;
    }

    printf("Кг\tСтоимость (руб)\n");
    printf("-----------------------\n");

    for(int kg = 1; kg <= 10; kg++) {
        int cost = kg * A;
        printf("%d\t%d\n", kg, cost);
    }

    return 0;
}
