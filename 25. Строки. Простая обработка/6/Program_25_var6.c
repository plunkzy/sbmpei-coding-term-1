//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №6 (вариант 6, сборник, стр. 75).
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

    result[0] = '\0';
    char *position = text;
    char *found = strstr(position, part);
    while (found != NULL) {
        strncat(result, position, found - position);
        strcat(result, part);
        strcat(result, part);
        position = found + partLength;
        found = strstr(position, part);
    }
    strcat(result, position);

    printf("\nРезультат: %s\n", result);

    return 0;
}
