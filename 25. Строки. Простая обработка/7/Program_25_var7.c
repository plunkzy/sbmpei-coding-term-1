//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №7 (вариант 7, сборник, стр. 75).
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

    int found = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '*' && (i == 0 || text[i - 1] == ' ')) {
            found = 1;
        }
    }

    strcpy(result, text);
    if (found) {
        for (int i = 0; result[i] != '\0'; i++) {
            if (result[i] == '-') {
                result[i] = '+';
            }
        }
    }

    printf("\nРезультат: %s\n", result);

    return 0;
}
