//
// Лабораторная работа №25 "Строки. Простая обработка".
// Решение задачи №16 (вариант 16, сборник, стр. 76).
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

    const char *vowels = "аеёиоуыэюяАЕЁИОУЫЭЮЯ";
    int count = 0;
    result[0] = '\0';
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && (i == 0 || text[i - 1] == ' ')) {
            int isVowel = 0;
            for (int j = 0; vowels[j] != '\0'; j += 2) {
                if (strncmp(&text[i], &vowels[j], 2) == 0) {
                    isVowel = 1;
                }
            }
            if (strchr("aeiouAEIOU", text[i]) != NULL) {
                isVowel = 1;
            }
            if (isVowel) {
                int end = i;
                while (text[end] != ' ' && text[end] != '\0') {
                    end++;
                }
                if (count > 0) {
                    strcat(result, " ");
                }
                strncat(result, &text[i], end - i);
                count++;
            }
        }
    }

    if (count == 0) {
        printf("\nТаких слов нет.\n");
    } else {
        printf("\nСлова, начинающиеся на гласную: %s\n", result);
    }

    return 0;
}
