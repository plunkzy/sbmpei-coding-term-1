# Пояснения по лабораторной работе №9

Эта работа продолжает работу с циклическими алгоритмами и учит обрабатывать многозначные числа. Задача с перестановкой чисел будет иметь практическое значение в дальнейших работах (в частности, этот подход может использоваться при решении работы №16, варианта №15).

Подход к переворачиванию:
1. Берём исходное число, делим его на 10 и получаем остаток. Это его последняя цифра.
2. Умножаем имеющееся число reversed на 10 (тем самым сдвигая имеющиеся цифры на один разряд влево), на место освободившегося разряда ставим полученную цифру.
3. Делим число на 10 в целых числах, тем самым удаляя последнюю цифру из числа.
4. Повторяем до момента, пока n не станет равен 0.

Разберём код решения:
```c
#include <stdio.h> // Подключение основной библиотеки в языке для ввода/вывода
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем основную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода в консоли русских символов

    int n, reversed = 0; // Объявляем переменные: n для хранения введенного числа и reversed для хранения перевернутого числа

    printf("Введите натуральное число N: "); // Выводим запрос на ввод числа N
    scanf("%d", &n); // Читаем значение n

    while (n != 0) { // Цикл выполняется, пока n не станет равным 0
        reversed = reversed * 10 + n % 10; // Вычисляем новое значение reversed, добавляя к нему последнюю цифру числа n
        n /= 10; // Удаляем последнюю цифру из числа n, сдвигая его на один разряд вправо
    }

    printf("Число с переставленными цифрами: %d\n", reversed); // Выводим результат - число с переставленными цифрами

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

Сложность задачи – в разработке алгоритма реверса числа. Здесь нужно просто подключать логику и знания математики, другого варианта нет.

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)