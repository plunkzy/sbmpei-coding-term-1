//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №17 (вариант 17, сборник, стр. 76).
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

    int start = -1;
    for (int i = 0; text[i] != '\0' && start == -1; i++) {
        if (text[i] == '*' && (i == 0 || text[i - 1] == ' ')) {
            start = i;
        }
    }

    strcpy(result, text);
    if (start != -1) {
        int i = start;
        while (result[i] != ' ' && result[i] != '\0') {
            i++;
        }
        for (; result[i] != '\0'; i++) {
            if (result[i] == '*') {
                result[i] = '+';
            }
        }
    }

    printf("\nРезультат: %s\n", result);

    return 0;
}
