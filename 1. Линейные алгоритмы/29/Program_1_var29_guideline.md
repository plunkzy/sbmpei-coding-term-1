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
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода русских символов
    int c1, c5, c10, r1, r5, r10, rub, cent; // Объявляем переменные для хранения количества монет номиналом 1 коп., 5 коп., 10 коп., 1 руб., 5 руб., 10 руб., итоговой суммы рублей и копеек
    printf("Введите количество монет номинал 1 коп.: "); // Запрашиваем ввод количества монет номиналом 1 коп.
    scanf("%d", &c1); // Считываем количество монет номиналом 1 коп.
    printf("Введите количество монет номинал 5 коп.: "); // Запрашиваем ввод количества монет номиналом 5 коп.
    scanf("%d", &c5); // Считываем количество монет номиналом 5 коп.
    printf("Введите количество монет номинал 10 коп.: "); // Запрашиваем ввод количества монет номиналом 10 коп.
    scanf("%d", &c10); // Считываем количество монет номиналом 10 коп.
    printf("Введите количество монет номинал 1 руб.: "); // Запрашиваем ввод количества монет номиналом 1 руб.
    scanf("%d", &r1); // Считываем количество монет номиналом 1 руб.
    printf("Введите количество монет номинал 5 руб.: "); // Запрашиваем ввод количества монет номиналом 5 руб.
    scanf("%d", &r5); // Считываем количество монет номиналом 5 руб.
    printf("Введите количество монет номинал 10 руб.: "); // Запрашиваем ввод количества монет номиналом 10 руб.
    scanf("%d", &r10); // Считываем количество монет номиналом 10 руб.

    cent = c1 + 5 * c5 + 10 * c10; // Высчитываем общее количество копеек
    rub = r1 + 5 * r5 + 10 * r10 + cent / 100; // Высчитываем количество рублей, исходя из рублёвых монет и количества сотен копеек (на случай, если копеек больше 100)
    printf("Общая сумма: %d руб. %d коп.", rub, cent%100); // Выводим общую сумму
    return 0; // Завершаем программу
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