
---

### **Program_3_var28.c**
```c
//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №28: "Даны веса 3-х бытовых приборов в кг (a, b, c). Определить, какое минимальное число поездок на лифте грузоподъемностью n кг потребуется для подъема всей техники."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a, b, c, n;
    int trips = 0;

    printf("Введите веса трех бытовых приборов (a b c) в кг: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Введите грузоподъемность лифта (n) в кг: ");
    scanf("%lf", &n);

    if(a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if(a < c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if(b < c) {
        double temp = b;
        b = c;
        c = temp;
    }

    if(a + b + c <= n) {
        trips = 1;
    }
    else if(a + b <= n) {
        trips = 2;
    }
    else if(a + c <= n) {
        trips = 2;
    }
    else if(b + c <= n) {
        trips = 2;
    }
    else if(a <= n && b <= n && c <= n) {
        trips = 3;
    }
    else {
        printf("Невозможно поднять один из приборов в лифте.\n");
        return 1;
    }

    printf("Минимальное число поездок: %d\n", trips);

    return 0;
}
