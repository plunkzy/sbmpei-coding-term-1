# Пояснения по лабораторной работе №5

Эта лабораторная работа учит нас работе с циклическими алгоритмами в языке C. В ходе выполнения заданий вы освоите различные виды циклов, научитесь применять их для решения практических задач, связанных с вычислениями, обработкой данных и оптимизацией процессов.

## Что нужно прочитать перед началом:
1. **Циклы `for`, `while` и `do-while`**
    - Синтаксис и использование.
    - Отличия между видами циклов и выбор подходящего цикла для конкретной задачи.
2. **Операторы управления циклами**
    - `break` и `continue`: как и когда их использовать.
3. **Вложенные циклы**
    - Примеры использования для многомерных структур данных и комплексных вычислений.
4. **Математические функции и вычисления**
    - Использование библиотеки `math.h` для выполнения математических операций.
    - Преобразование типов данных для корректных вычислений.
5. **Оптимизация циклов**
    - Способы уменьшения количества итераций без потери функциональности.
    - Избежание избыточных вычислений внутри циклов.

## Разбор кода решения задачи

```c
#include <stdio.h> // Подключение библиотеки для ввода/вывода
#include <math.h> // Подключение библиотеки для математических функций
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для корректного отображения русских символов

    int terms = 9; // Устанавливаем количество членов ряда: 1,2,4,8,16,32,64,128,256 - всего 9
    long long sum = 0; // Инициализируем переменную для суммы

    printf("Вычисление суммы: "); // Выводим начало строки вычисления суммы
    for(int i = 0; i < terms; i++) { // Запускаем цикл от 0 до 8 для вычисления каждого члена ряда
        long long term = pow(2, i); // Вычисляем текущий член ряда как 2^i
        sum += term; // Добавляем текущий член к общей сумме
        printf("%lld", term); // Выводим текущий член
        if(i < terms -1) { // Если это не последний член
            printf(" + "); // Добавляем знак сложения
        }
    }
    printf(" = %lld\n", sum); // Выводим итоговую сумму

    return 0; // Завершаем программу
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

Фишка этой работы в том, чтобы просто красиво циклически выводить результаты. Почти во всех заданиях здесь мы используем таблицу для вывода, это красиво. Успехов!

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)