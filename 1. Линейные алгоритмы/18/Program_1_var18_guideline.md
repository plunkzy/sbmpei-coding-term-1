# Пояснения по лабораторной работе №1

Эта лабораторная работа является вводной и учит простой работе с вводом/выводом в С.
Вот то, про что нужно почитать перед началом:
1. Функция для считывания scanf()
2. Функция для печати printf()
3. Для многих вариантов — функции из модуля <math.h>

```c
#include <stdio.h> // Подключение библиотеки для ввода/вывода
#include <math.h> // Подключение библиотеки для математических функций
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем главную функцию
SetConsoleOutputCP(UTF_8); // Устанавливаем кодировку UTF-8 для вывода русских символов

    float x1, y1, x2, y2, x3, y3, x4, y4; // Объявляем переменные для координат точек

    printf("Введите координаты точек четырехугольника.\n"); // Выводим сообщение о просьбе ввести координаты точек
    printf("Введите координаты первой точки (x1, y1): "); // Выводим сообщение о вводе координат первой точки
    scanf("%f %f", &x1, &y1); // Считываем координаты первой точки

    printf("Введите координаты второй точки (x2, y2): "); // Выводим сообщение о вводе координат второй точки
    scanf("%f %f", &x2, &y2); // Считываем координаты второй точки

    printf("Введите координаты третьей точки (x3, y3): "); // Выводим сообщение о вводе координат третьей точки
    scanf("%f %f", &x3, &y3); // Считываем координаты третьей точки

    printf("Введите координаты четвёртой точки (x4, y4): "); // Выводим сообщение о вводе координат четвертой точки
    scanf("%f %f", &x4, &y4); // Считываем координаты четвёртой точки

    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Вычисляем длину первой стороны
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2)); // Вычисляем длину второй стороны
    double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2)); // Вычисляем длину третьей стороны
    double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2)); // Вычисляем длину четвертой стороны

    double perimeter = side1 + side2 + side3 + side4; // Вычисляем периметр четырехугольника

    double diagonal1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)); // Вычисляем длину первой диагонали
    double diagonal2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2)); // Вычисляем длину второй диагонали
    double s1 = (side1 + side2 + diagonal1) / 2; // Вычисляем полупериметр для первой площади
    double s2 = (side3 + side4 + diagonal2) / 2; // Вычисляем полупериметр для второй площади

    double area1 = sqrt(s1 * (s1 - side1) * (s1 - side2) * (s1 - diagonal1)); // Вычисляем первую площадь
    double area2 = sqrt(s2 * (s2 - side3) * (s2 - side4) * (s2 - diagonal2)); // Вычисляем вторую площадь
    double totalArea = area1 + area2; // Вычисляем общую площадь четырехугольника

    printf("Периметр четырехугольника: %.2f\n", perimeter); // Выводим периметр четырехугольника
    printf("Площадь четырехугольника: %.2f\n", totalArea); // Выводим общую площадь четырехугольника

    return 0; // Завершаем программу с кодом 0
}

// Использование типа double для переменных, связанных с длинами, площадью, полупериметрами обусловлено тем, что функция sqrt возвращает значение типа double
```

> [!IMPORTANT]
> Если Вы используете не Windows, а, например, macOS, то проблем с кодировкой быть не должно — в таком случае игнорируйте следующие строки:
> ```c
> ...
> #include <windows.h> // Подключение модуля windows.h для установки кодировки вывода
> ...
>      SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода в консоли русских символов: иначе будут иероглифы
> ```
>
> В операционных системах семейства Linux могут быть свои заморочки с кодировкой. Если что-то работает не так, как ожидается, то заглядывайте в Google :)

Первая работа совсем простая — она нужна для того, чтобы Вы в целом поняли, что и как происходит.

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)