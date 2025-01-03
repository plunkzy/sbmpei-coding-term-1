//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №26: "Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N² = 1 + 3 + 5 + … + (2·N – 1)."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N, square = 0;

    printf("Введите натуральное число N (> 0): ");
    scanf("%d", &N);

    if(N < 1) {
        printf("Ошибка: N должно быть натуральным числом (N > 0).\n");
        return 1;
    }

    for(int i = 1; i <= 2*N-1; i += 2) {
        square += i;
    }

    printf("Квадрат числа %d равен %d.\n", N, square);

    return 0;
}
