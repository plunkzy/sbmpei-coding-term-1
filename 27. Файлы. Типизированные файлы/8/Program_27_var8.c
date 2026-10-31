//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №8 (вариант 8, сборник, стр. 80).
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
    FILE *f = fopen("f.dat", "wb");
    fwrite(line, 1, strlen(line), f);
    fclose(f);

    f = fopen("f.dat", "ab");
    fputc('e', f);
    fputc('n', f);
    fputc('d', f);
    fclose(f);

    int symbol;
    f = fopen("f.dat", "rb");
    printf("\nФайл f: ");
    while ((symbol = fgetc(f)) != EOF) {
        putchar(symbol);
    }
    printf("\n");
    fclose(f);

    return 0;
}
