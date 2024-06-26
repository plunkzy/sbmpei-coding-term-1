# Пояснения по лабораторной работе №1

Эта лабораторная работа является вводной и учит простой работе с вводом/выводом в С.
Вот то, про что нужно почитать перед началом:
1. Функция для считывания scanf()
2. Функция для печати printf()
3. Для многих вариантов — функции из модуля <math.h>

```c
#include <stdio.h> // Подключение библиотеки для ввода/вывода
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода русских символов

    int a1, d, n, an; // Объявляем переменные для первого элемента, разности, номера искомого элемента и самого искомого элемента

    printf("Введите первый элемент прогрессии (a1): "); // Выводим запрос на ввод первого элемента прогрессии
    scanf("%d", &a1); // Считываем первый элемент прогрессии

    printf("Введите разность прогрессии (d): "); // Выводим запрос на ввод разности прогрессии
    scanf("%d", &d); // Считываем разность прогрессии

    n = 30; // Задаем номер искомого элемента (30-й)
    an = a1 + (n - 1) * d; // Вычисляем искомый элемент по формуле

    printf("30-й элемент арифметической прогрессии с первым элементом %d и разностью %d равен %d\n", a1, d, an); // Выводим результат

    return 0; // Завершаем программу с кодом 0
}
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