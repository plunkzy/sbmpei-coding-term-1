//
// Лабораторная работа №27 "Файлы. Типизированные файлы".
// Решение задачи №12 (вариант 12, сборник, стр. 80).
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

    int count = 0;
    f = fopen("f.dat", "rb");
    int value;
    while (fread(&value, sizeof(value), 1, f) == 1) {
        if (value % 2 == 0 && (value / 2) % 2 != 0) {
            count++;
        }
    }
    fclose(f);

    printf("\nКоличество удвоенных нечётных чисел: %d\n", count);

    return 0;
}
