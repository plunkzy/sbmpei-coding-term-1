//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №24 (вариант 24, сборник, стр. 81).
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

    double target;
    printf("Введите число A: ");
    scanf("%lf", &target);

    int count = 0;
    f = fopen("f.dat", "rb");
    double value;
    while (fread(&value, sizeof(value), 1, f) == 1) {
        if (value == target) {
            count++;
        }
    }
    fclose(f);

    printf("\nКоличество компонент, равных A: %d\n", count);

    return 0;
}
