//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №10 (вариант 10, сборник, стр. 75).
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

    char *comma = strchr(text, ',');

    int length = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (comma != NULL && &text[i] < comma && text[i] == ' ') {
            continue;
        }
        if (comma != NULL && &text[i] > comma && text[i] == '.') {
            strcpy(&result[length], "...");
            length += 3;
            continue;
        }
        result[length] = text[i];
        length++;
    }
    result[length] = '\0';

    printf("\nРезультат: %s\n", result);

    return 0;
}
