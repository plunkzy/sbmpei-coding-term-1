//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №27 (вариант 27, сборник, стр. 77).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char text[256];

    printf("Введите строку: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int index = -1;
    for (int i = 0; text[i] != '\0' && index == -1; i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            index = i;
        }
    }

    if (index == -1) {
        printf("\nГрупп цифр нет.\n");
    } else {
        printf("\nИндекс первой группы цифр: %d\n", index);
    }

    return 0;
}
