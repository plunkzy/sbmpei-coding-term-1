//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №13: "На шахматной доске стоят черный король и три белые ладьи. Проверить, не находится ли король под боем, а если есть угроза, то от кого именно. Король может ходить на одну клетку в любую сторону. Ладья ходит только по горизонтали и вертикали.".
// Опубликовано 23.03.2024
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int king_row, king_col, rook1_row, rook1_col, rook2_row, rook2_col, rook3_row, rook3_col;

    printf("Введите координаты черного короля (строка, столбец): ");
    scanf("%d %d", &king_row, &king_col);

    printf("Введите координаты первой белой ладьи (строка, столбец): ");
    scanf("%d %d", &rook1_row, &rook1_col);

    printf("Введите координаты второй белой ладьи (строка, столбец): ");
    scanf("%d %d", &rook2_row, &rook2_col);

    printf("Введите координаты третьей белой ладьи (строка, столбец): ");
    scanf("%d %d", &rook3_row, &rook3_col);

    if (king_row == rook1_row || king_col == rook1_col ||
        king_row == rook2_row || king_col == rook2_col ||
        king_row == rook3_row || king_col == rook3_col) {
        printf("Король находится под ударом.\n");

        if (king_row == rook1_row && king_col == rook1_col)
            printf("Первая ладья угрожает королю.\n");
        if (king_row == rook2_row && king_col == rook2_col)
            printf("Вторая ладья угрожает королю.\n");
        if (king_row == rook3_row && king_col == rook3_col)
            printf("Третья ладья угрожает королю.\n");
    } else {
        printf("Король не находится под ударом.\n");
    }

    return 0;
}