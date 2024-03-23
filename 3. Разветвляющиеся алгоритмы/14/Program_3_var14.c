//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №14: "На шахматной доске стоят три ферзя. Найти те пары из них, которые угрожают друг другу. Ферзь может ходить по вертикали, горизонтали и диагонали на любое количество клеток.".
// Опубликовано 23.03.2024
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int queen1_row, queen1_col, queen2_row, queen2_col, queen3_row, queen3_col;

    printf("Введите координаты первого ферзя (строка, столбец): ");
    scanf("%d %d", &queen1_row, &queen1_col);

    printf("Введите координаты второго ферзя (строка, столбец): ");
    scanf("%d %d", &queen2_row, &queen2_col);

    printf("Введите координаты третьего ферзя (строка, столбец): ");
    scanf("%d %d", &queen3_row, &queen3_col);

    printf("Пары ферзей, угрожающие друг другу:\n");

    // Проверяем первую и вторую пару ферзей
    if (queen1_row == queen2_row || queen1_col == queen2_col || abs(queen1_row - queen2_row) == abs(queen1_col - queen2_col))
        printf("Первый и второй ферзи угрожают друг другу.\n");

    // Проверяем первую и третью пару ферзей
    if (queen1_row == queen3_row || queen1_col == queen3_col || abs(queen1_row - queen3_row) == abs(queen1_col - queen3_col))
        printf("Первый и третий ферзи угрожают друг другу.\n");

    // Проверяем вторую и третью пару ферзей
    if (queen2_row == queen3_row || queen2_col == queen3_col || abs(queen2_row - queen3_row) == abs(queen2_col - queen3_col))
        printf("Второй и третий ферзи угрожают друг другу.\n");

    return 0;
}