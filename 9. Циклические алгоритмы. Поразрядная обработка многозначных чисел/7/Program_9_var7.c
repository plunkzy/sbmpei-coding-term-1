//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №7: "Ввести два натуральных числа. Выяснить, одинаковые ли у них первые цифры."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long num1, num2;
    int first1, first2;

    printf("Введите первое натуральное число: ");
    scanf("%lld", &num1);
    printf("Введите второе натуральное число: ");
    scanf("%lld", &num2);

    if(num1 <= 0 || num2 <= 0) {
        printf("Ошибка: оба числа должны быть натуральными (N > 0).\n");
        return 1;
    }

    long long temp1 = num1;
    while(temp1 >= 10) {
        temp1 /= 10;
    }
    first1 = temp1;

    long long temp2 = num2;
    while(temp2 >= 10) {
        temp2 /= 10;
    }
    first2 = temp2;

    if(first1 == first2) {
        printf("Первая цифра обоих чисел одинаковая (%d).\n", first1);
    } else {
        printf("Первая цифра чисел различны (%d и %d).\n", first1, first2);
    }

    return 0;
}
