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

    double A, S; // Объявляем переменные для длины стороны и площади фигуры
    int N; // Объявляем переменную для максимального количества сторон

    printf("Введите длину стороны A (см): "); // Запрашиваем ввод длины стороны
    scanf("%lf", &A); // Считываем значение A
    printf("Введите количество сторон N (>=3): "); // Запрашиваем ввод максимального количества сторон
    scanf("%d", &N); // Считываем значение N

    printf("Фигура\tКоличество сторон\tПлощадь (см²)\n"); // Выводим заголовок таблицы
    printf("---------------------------------------------------\n"); // Выводим разделительную линию

    for(int sides = 3; sides <= N; sides++) { // Запускаем цикл от 3 до N для каждой фигуры
        double area; // Объявляем переменную для площади текущей фигуры
        if(sides < 3) { // Проверяем, существует ли фигура с текущим количеством сторон
            printf("Фигура с %d сторонами не существует.\n", sides); // Выводим сообщение об ошибке
            continue; // Переходим к следующей итерации цикла
        }
        double apothem = A / (2 * tan(M_PI / sides)); // Вычисляем апофему фигуры
        area = (sides * A * apothem) / 2.0; // Вычисляем площадь фигуры по формуле S = (n * a * ap) / 2
        printf("%d-угольник\t%d\t\t\t%.2lf\n", sides, sides, area); // Выводим количество сторон и площадь фигуры
    }

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