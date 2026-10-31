//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №14 (вариант 14, сборник, стр. 76).
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

    int bestStart = -1;
    int bestLength = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            int j = i;
            while (text[j] >= '0' && text[j] <= '9') {
                j++;
            }
            if (j - i > bestLength) {
                bestLength = j - i;
                bestStart = i;
            }
            i = j - 1;
        }
    }

    if (bestStart == -1) {
        printf("\nЦепочек цифр нет.\n");
    } else {
        strncpy(result, &text[bestStart], bestLength);
        result[bestLength] = '\0';
        printf("\nСамая длинная цепочка цифр: %s\n", result);
    }

    return 0;
}
