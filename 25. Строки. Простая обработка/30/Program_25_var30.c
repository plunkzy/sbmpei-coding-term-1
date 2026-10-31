//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №30 (вариант 30, сборник, стр. 77).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char text[256];

    printf("Введите строку: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    int balance = 0;
    int correct = 1;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '(') {
            balance++;
        } else if (text[i] == ')') {
            balance--;
            if (balance < 0) {
                correct = 0;
            }
        }
    }
    if (balance != 0) {
        correct = 0;
    }

    if (correct) {
        printf("\nСкобки расставлены правильно.\n");
    } else {
        printf("\nСкобки расставлены неправильно.\n");
    }

    return 0;
}
