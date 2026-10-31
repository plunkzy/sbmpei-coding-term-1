//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №29 (вариант 29, сборник, стр. 82).
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
        double value;
        printf("Введите компоненту %d: ", i + 1);
        scanf("%lf", &value);
        fwrite(&value, sizeof(value), 1, f);
    }
    fclose(f);

    double low, high;
    printf("Введите границу a: ");
    scanf("%lf", &low);
    printf("Введите границу b: ");
    scanf("%lf", &high);

    int count = 0;
    f = fopen("f.dat", "rb");
    double value;
    while (fread(&value, sizeof(value), 1, f) == 1) {
        if (value >= low && value <= high) {
            count++;
        }
    }
    fclose(f);

    printf("\nКоличество компонент в диапазоне [a, b]: %d\n", count);

    return 0;
}
