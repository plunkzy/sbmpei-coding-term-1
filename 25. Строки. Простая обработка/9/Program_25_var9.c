//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №9 (вариант 9, сборник, стр. 75).
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

    int inside = 0;
    int length = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ')') {
            inside = 0;
        }
        if (!inside) {
            result[length] = text[i];
            length++;
        }
        if (text[i] == '(') {
            inside = 1;
        }
    }
    result[length] = '\0';

    printf("\nРезультат: %s\n", result);

    return 0;
}
