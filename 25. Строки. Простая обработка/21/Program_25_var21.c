//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №21 (вариант 21, сборник, стр. 76).
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
    char part[256];

    printf("Введите строку: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("Введите подстроку: ");
    fgets(part, sizeof(part), stdin);
    part[strcspn(part, "\n")] = '\0';

    int partLength = strlen(part);
    if (partLength == 0) {
        printf("Подстрока не должна быть пустой.\n");
        return 1;
    }

    char *found = strstr(text, part);
    strcpy(result, text);
    if (found != NULL) {
        int end = found - text + partLength;
        strcpy(&result[end], "*");
        strcat(result, &text[end]);
    }

    if (found != NULL) {
        printf("\nПодстрока входит в строку.\n");
    } else {
        printf("\nПодстрока не входит в строку.\n");
    }
    printf("Преобразованная строка: %s\n", result);

    return 0;
}
