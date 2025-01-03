//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №13: "Вычислить корни уравнения X² + BX – B/2 =0 для значений коэффициента В, равных 1, 2, 3,…, N."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double B, discriminant, root1, root2;
    int N;

    printf("Введите максимальное значение коэффициента B (N): ");
    scanf("%d", &N);

    printf("B\tКорень X1\tКорень X2\n");
    printf("-------------------------------------\n");

    for(int i = 1; i <= N; i++) {
        B = (double)i;
        discriminant = B * B + 2 * B; // Дискриминант D = B² + 2B
        if(discriminant < 0) {
            printf("%d\tНет действительных корней\tНет действительных корней\n", i);
            continue;
        }
        root1 = (-B + sqrt(discriminant)) / 2.0;
        root2 = (-B - sqrt(discriminant)) / 2.0;
        printf("%.0lf\t%.2lf\t\t%.2lf\n", B, root1, root2);
    }

    return 0;
}
