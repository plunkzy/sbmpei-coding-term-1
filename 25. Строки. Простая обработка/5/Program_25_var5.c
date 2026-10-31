//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №5 (вариант 5, сборник, стр. 75).
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

    char *first = strchr(text, '?');
    char *second = NULL;
    if (first != NULL) {
        second = strchr(first + 1, '?');
    }

    int length = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (second != NULL && &text[i] > first && &text[i] < second && text[i] == ' ') {
            continue;
        }
        result[length] = text[i];
        length++;
    }
    result[length] = '\0';

    printf("\nРезультат: %s\n", result);

    return 0;
}
