//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №9: "Согласно бюллетеню Центробанка 100$ эквивалентны Т руб. Вычислить эквивалент 2, 3, 4, …, N руб. в долларах."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double T, rubles, dollars;
    int N, i;
    double exchange_rate_usd_to_rub = 100.0; // 100$ = T руб.
    double exchange_rate_rub_to_usd;

    printf("Введите эквивалент 100$ в рублях (Т): ");
    scanf("%lf", &T);
    printf("Введите значение N: ");
    scanf("%d", &N);

    // Вычисляем курс рубль-доллар
    exchange_rate_rub_to_usd = (100.0 / T);

    printf("Рубли\tДоллары\n");
    printf("---------------------\n");

    for(i = 2; i <= N; i++) {
        rubles = (double)i;
        dollars = rubles * exchange_rate_rub_to_usd;
        printf("%d\t%.2lf\n", i, dollars);
    }

    return 0;
}
