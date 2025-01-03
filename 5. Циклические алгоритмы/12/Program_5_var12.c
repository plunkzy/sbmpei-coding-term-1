//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №12: "Вычислить корни системы уравнений (Ax + Y = 1; x + Ay = 5) для значений коэффициента A, равных 2, 3, 4, …, N. Выражение для корня Y можно найти, если вычесть из первого уравнения второе, умноженное на A."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double A, x, y;
    int N;

    printf("Введите максимальное значение коэффициента A (N): ");
    scanf("%d", &N);

    printf("A\tX\tY\n");
    printf("-----------------------\n");

    for(int i = 2; i <= N; i++) {
        A = (double)i;
        if(A == 1.0) { // Проверяем, не приведет ли деление на ноль
            printf("%.0lf\tUndefined\tUndefined\n", A);
            continue;
        }
        y = (1.0 - 5.0 * A) / (1.0 - A * A);
        x = 5.0 - A * y;
        printf("%.0lf\t%.2lf\t%.2lf\n", A, x, y);
    }

    return 0;
}
