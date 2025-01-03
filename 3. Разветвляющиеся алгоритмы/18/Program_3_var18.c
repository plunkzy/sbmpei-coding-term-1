//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №18: "Три точки на плоскости заданы своими координатами. Между какими точками расстояние наибольшее?"
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() { // Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода русских символов

    double x1, y1, x2, y2, x3, y3;
    double d12, d13, d23;
    double max_distance;
    int pair = 0;

    printf("Введите координаты трех точек (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    // Вычисляем расстояния между точками
    d12 = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    d13 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    d23 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));

    // Определяем максимальное расстояние
    max_distance = d12;
    pair = 1;
    if (d13 > max_distance) {
        max_distance = d13;
        pair = 2;
    }
    if (d23 > max_distance) {
        max_distance = d23;
        pair = 3;
    }

    // Выводим результат
    if (pair == 1) {
        printf("Наибольшее расстояние между точками 1 и 2: %.2lf\n", max_distance);
    } else if (pair == 2) {
        printf("Наибольшее расстояние между точками 1 и 3: %.2lf\n", max_distance);
    } else if (pair == 3) {
        printf("Наибольшее расстояние между точками 2 и 3: %.2lf\n", max_distance);
    }

    return 0;
}
