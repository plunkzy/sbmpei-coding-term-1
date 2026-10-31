//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №28 (вариант 28, сборник, стр. 75).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char text[256];
    char result[1024];

    printf("Введите строку: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    char *first = strchr(text, '+');
    char *last = strrchr(text, '+');
    if (first != NULL) {
        strncpy(result, first, last - first + 1);
        result[last - first + 1] = '\0';
    } else {
        strcpy(result, text);
    }

    printf("\nРезультат: %s\n", result);

    return 0;
}
