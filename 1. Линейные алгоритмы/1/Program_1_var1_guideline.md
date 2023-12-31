# Пояснения по лабораторной работе №1

Эта работа является вводной и демонстрирует основы языка C. В ней нужно выполнить простые математические операции с двумя числами.

Разберём код решения этой задачи.
```c
#include <stdio.h> // Подключение основной библиотеки в языке для ввода/вывода
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем основную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода в консоли русских символов

    double num1, num2; // Объявляем две переменные для хранения вводимых чисел

    printf("Введите первое число (не равное нулю): "); // Выводим запрос на ввод первого числа
    scanf("%lf", &num1); // Читаем первое число и сохраняем его значение
    printf("Введите второе число (не равное нулю): "); // Выводим запрос на ввод второго числа
    scanf("%lf", &num2); // Читаем второе число и сохраняем его значение

    if (num1 == 0 || num2 == 0) { // Проверяем, равно ли хотя бы одно из чисел нулю
        printf("Оба числа должны быть ненулевыми.\n"); // Выводим сообщение об ошибке, если одно из чисел равно нулю
        return 1; // Завершаем программу с кодом ошибки 1
    }

    printf("Сумма: %f\n", num1 + num2); // Выводим сумму чисел
    printf("Разность: %f\n", num1 - num2); // Выводим разность чисел
    printf("Произведение: %f\n", num1 * num2); // Выводим произведение чисел
    printf("Частное: %f\n", num1 / num2); // Выводим частное чисел

    return 0; // Завершаем программу с возвращением 0
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

Вот и всё — первая работа вышла совсем простой.

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)