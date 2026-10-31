//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №8 (вариант 8, сборник, стр. 75).
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

    int start = 0;
    while (text[start] == ' ') {
        start++;
    }
    while (text[start] != ' ' && text[start] != '\0') {
        start++;
    }
    while (text[start] == ' ') {
        start++;
    }

    int end = strlen(text);
    while (end > 0 && text[end - 1] == ' ') {
        end--;
    }
    while (end > 0 && text[end - 1] != ' ') {
        end--;
    }
    while (end > start && text[end - 1] == ' ') {
        end--;
    }

    if (end > start) {
        strncpy(result, &text[start], end - start);
        result[end - start] = '\0';
    } else {
        result[0] = '\0';
    }

    printf("\nРезультат: %s\n", result);

    return 0;
}
