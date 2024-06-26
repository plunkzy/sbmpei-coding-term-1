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

    double radius, height, surface, PI = 3.14; // Объявляем переменные для радиуса, высоты и площади поверхности цилиндра

    printf("Введите радиус основания цилиндра: "); // Выводим запрос на ввод радиуса основания
    scanf("%lf", &radius); // Считываем радиус основания

    printf("Введите высоту цилиндра: "); // Выводим запрос на ввод высоты цилиндра
    scanf("%lf", &height); // Считываем высоту цилиндра

    surface = 2 * PI * radius * (radius + height); // Вычисляем площадь поверхности цилиндра по формуле

    printf("Площадь поверхности цилиндра с радиусом %.2lf и высотой %.2lf равна %.2lf\n", radius, height, surface); // Выводим результат

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