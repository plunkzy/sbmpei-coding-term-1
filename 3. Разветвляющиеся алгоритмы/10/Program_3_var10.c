//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №10: "На шахматной доске стоят черный король и белые ладья и слон. Проверить, есть ли угроза королю, и если есть, то от кого именно.
// Король может ходить на одну клетку в любую сторону. Ладья ходит только по горизонтали и вертикали. Слон ходит только по диагонали".
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int kx, ky, rx, ry, bx, by;

    printf("Введите позицию короля (kx, ky): ");
    scanf("%d %d", &kx, &ky);

    printf("Введите позицию ладьи (rx, ry): ");
    scanf("%d %d", &rx, &ry);

    printf("Введите позицию слона (bx, by): ");
    scanf("%d %d", &bx, &by);

    int threat1 = (kx == rx || ky == ry);
    int threat2 = (abs(kx - bx) == abs(ky - by));

    if (threat1 && threat2) {
        printf("Угроза от ладьи и слона\n");
    } else if (threat1) {
        printf("Угроза от ладьи\n");
    } else if (threat2) {
        printf("Угроза от слона\n");
    } else {
        printf("Нет угрозы\n");
    }

    return 0;
}
