//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №20: "Если сумма цифр введенного трехзначного числа N кратна трем, то увеличить число на единицу, иначе – уменьшить число вдвое."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N, original_N, sum = 0, digit;

    printf("Введите трехзначное число N: ");
    scanf("%d", &N);
    original_N = N;

    // Вычисляем сумму цифр числа
    while (N > 0) {
        digit = N % 10;
        sum += digit;
        N /= 10;
    }

    // Проверяем кратность суммы трем и выполняем соответствующее действие
    if (sum % 3 == 0) {
        original_N += 1;
    } else {
        original_N /= 2;
    }

    printf("Результат: %d\n", original_N);

    return 0;
}