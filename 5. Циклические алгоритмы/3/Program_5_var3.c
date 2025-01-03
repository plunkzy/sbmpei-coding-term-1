//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №3: "Согласно бюллетеню Центробанка 100 евро эквивалентны Т руб. Вычислить эквивалент 2, 3, 4, …, N руб. в долларах."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double T, rubles, dollars;
    int N, i;
    double exchange_rate_eur_to_rub = 100.0;
    double exchange_rate_rub_to_usd = 0.013; // Предположим, что 1 рубль = 0.013 долларов. Вообще очень странная задача...

    printf("Введите эквивалент 100 евро в рублях (Т): ");
    scanf("%lf", &T);
    printf("Введите значение N: ");
    scanf("%d", &N);

    printf("Рубли\tДоллары\n");
    printf("---------------------\n");

    for(i = 2; i <= N; i++) {
        rubles = i;
        dollars = (rubles / exchange_rate_eur_to_rub) * exchange_rate_rub_to_usd;
        printf("%d\t%.2lf\n", i, dollars);
    }

    return 0;
}
