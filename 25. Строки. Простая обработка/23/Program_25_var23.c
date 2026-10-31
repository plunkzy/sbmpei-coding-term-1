//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №23 (вариант 23, сборник, стр. 76).
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

    int last = strlen(text) - 1;
    while (last > 0 && (text[last] & 0xC0) == 0x80) {
        last--;
    }
    strcpy(result, text);
    if (last >= 0) {
        strcpy(&result[last], "???");
        strcat(result, &text[last]);
    }

    printf("\nРезультат: %s\n", result);

    return 0;
}
