//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №3: "Скорость лодки в стоячей воде V км/ч, скорость течения реки U км/ч (U<V). Время движения лодки по озеру T1 ч, а по реке (против течения) – T2 ч. Определить путь, пройденный лодкой."
// Опубликовано 30.11.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float V, U, T1, T2;
    printf("Введите скорость лодки в стоячей воде (V) в км/ч: ");
    scanf("%f", &V);
    printf("Введите скорость течения реки (U) в км/ч: ");
    scanf("%f", &U);
    printf("Введите время движения по озеру (T1) в часах: ");
    scanf("%f", &T1);
    printf("Введите время движения по реке против течения (T2) в часах: ");
    scanf("%f", &T2);

    if (U >= V) {
        printf("Скорость течения должна быть меньше скорости лодки.\n");
        return 1;
    }

    float distanceLake = V * T1;
    float distanceRiver = (V - U) * T2;
    float totalDistance = distanceLake + distanceRiver;

    printf("Общий путь, пройденный лодкой: %.2f км\n", totalDistance);

    return 0;
}
