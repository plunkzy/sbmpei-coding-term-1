//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №4 (вариант 4, сборник, стр. 80).
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
    int count = 0;
    int previous = 0;
    int symbol;
    while ((symbol = fgetc(f)) != EOF) {
        if (previous == 'a' && symbol == 'b') {
            count++;
        }
        previous = symbol;
    }
    fclose(f);

    printf("\nЧисло вхождений сочетания «ab»: %d\n", count);

    return 0;
}
