//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №13 (вариант 13, сборник, стр. 76).
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

    int length = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        result[length] = text[i];
        length++;
        if (text[i] >= '0' && text[i] <= '9') {
            strcpy(&result[length], "!!!");
            length += 3;
        }
    }
    result[length] = '\0';

    printf("\nРезультат: %s\n", result);

    return 0;
}
