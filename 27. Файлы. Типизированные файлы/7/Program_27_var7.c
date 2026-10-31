//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №7 (вариант 7, сборник, стр. 80).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char line[256];
    printf("Введите символы файла f: ");
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';
    if (strlen(line) < 2) {
        printf("В файле должно быть не менее двух компонент.\n");
        return 1;
    }

    FILE *f = fopen("f.dat", "wb");
    fwrite(line, 1, strlen(line), f);
    fclose(f);

    f = fopen("f.dat", "rb");
    int first = fgetc(f);
    int second = fgetc(f);
    fclose(f);

    if (first >= '0' && first <= '9' && second >= '0' && second <= '9') {
        printf("\nПервые два символа — цифры.\n");
        int number = (first - '0') * 10 + (second - '0');
        if (number % 2 == 0) {
            printf("Число, образованное цифрами, чётное.\n");
        } else {
            printf("Число, образованное цифрами, нечётное.\n");
        }
    } else {
        printf("\nПервые два символа не являются цифрами.\n");
    }

    return 0;
}
