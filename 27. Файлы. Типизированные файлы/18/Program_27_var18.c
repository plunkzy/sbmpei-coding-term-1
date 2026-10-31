//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №18 (вариант 18, сборник, стр. 81).
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

    f = fopen("f.dat", "rb");
    FILE *g = fopen("g.dat", "wb");
    int previous = 0;
    int symbol;
    while ((symbol = fgetc(f)) != EOF) {
        if (previous == 'w') {
            fputc(symbol, g);
        }
        previous = symbol;
    }
    fclose(f);
    fclose(g);

    g = fopen("g.dat", "rb");
    printf("\nФайл g: ");
    while ((symbol = fgetc(g)) != EOF) {
        putchar(symbol);
    }
    printf("\n");
    fclose(g);

    return 0;
}
