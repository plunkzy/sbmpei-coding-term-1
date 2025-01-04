//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №20: "Ввести N чисел. Найти сумму чисел, больших 10, но меньших 20."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int sum = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number > 10 && number < 20) {
            sum += number;
        }
    }

    printf("Сумма чисел, больших 10, но меньших 20: %d\n", sum);

    return 0;
}