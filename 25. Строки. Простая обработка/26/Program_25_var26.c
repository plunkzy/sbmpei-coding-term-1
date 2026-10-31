//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №26 (вариант 26, сборник, стр. 77).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int isLatin(char symbol) {
    return (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');
}

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
        if (isLatin(text[i]) && isLatin(text[i + 1])) {
            strcpy(&result[length], "!");
            length += 1;
        }
    }
    result[length] = '\0';

    printf("\nРезультат: %s\n", result);

    return 0;
}
