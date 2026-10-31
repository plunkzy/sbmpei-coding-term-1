//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №6 (вариант 6, сборник, стр. 80).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Введите количество компонент файла f: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Количество компонент должно быть положительным.\n");
        return 1;
    }

    FILE *f = fopen("f.dat", "wb");
    for (int i = 0; i < n; i++) {
        int value;
        printf("Введите компоненту %d: ", i + 1);
        scanf("%d", &value);
        fwrite(&value, sizeof(value), 1, f);
    }
    fclose(f);

    FILE *g = fopen("g.dat", "wb");
    f = fopen("f.dat", "rb");
    int value;
    while (fread(&value, sizeof(value), 1, f) == 1) {
        if (value > 0 && value % 2 == 0) {
            fwrite(&value, sizeof(value), 1, g);
        }
    }
    fclose(f);

    fclose(g);

    g = fopen("g.dat", "rb");
    printf("\nФайл g:");
    while (fread(&value, sizeof(value), 1, g) == 1) {
        printf(" %d", value);
    }
    printf("\n");
    fclose(g);

    return 0;
}
