//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №21 (вариант 21, сборник, стр. 81).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char lineF[256];
    printf("Введите символы файла f: ");
    fgets(lineF, sizeof(lineF), stdin);
    lineF[strcspn(lineF, "\n")] = '\0';
    FILE *f = fopen("f.dat", "wb");
    fwrite(lineF, 1, strlen(lineF), f);
    fclose(f);
    char lineG[256];
    printf("Введите символы файла g: ");
    fgets(lineG, sizeof(lineG), stdin);
    lineG[strcspn(lineG, "\n")] = '\0';
    FILE *g = fopen("g.dat", "wb");
    fwrite(lineG, 1, strlen(lineG), g);
    fclose(g);

    f = fopen("f.dat", "rb");
    g = fopen("g.dat", "rb");
    FILE *h = fopen("h.dat", "wb");
    int a = fgetc(f);
    int b = fgetc(g);
    while (a != EOF && b != EOF && a == b) {
        fputc(a, h);
        a = fgetc(f);
        b = fgetc(g);
    }
    fclose(f);
    fclose(g);
    fclose(h);

    int symbol;
    h = fopen("h.dat", "rb");
    printf("\nФайл h: ");
    while ((symbol = fgetc(h)) != EOF) {
        putchar(symbol);
    }
    printf("\n");
    fclose(h);

    return 0;
}
