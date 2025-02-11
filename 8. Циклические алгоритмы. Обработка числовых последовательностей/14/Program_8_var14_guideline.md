# Пояснения по лабораторной работе №8

В данной лабораторной работе вы будете углубляться в изучение циклических алгоритмов и их применение для обработки числовых последовательностей. Работа включает выполнение различных задач, направленных на практическое освоение циклов, условных операторов и базовых алгоритмических конструкций.

## Что нужно прочитать перед началом:
1. Циклы ```for```, ```while``` и их выбор для разных задач.
2. Способы работы с числами.

> [!TIP]
> Из дополнительного на будущее я бы советовал почитать про теорему Ферма, алгоритм Евклида и решето Эратосфена. Это очень полезные вещи.

## Разбор кода решения задачи

```c
#include <stdio.h> // Подключение библиотеки для ввода/вывода
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для корректного отображения русских символов

    int N; // Объявляем переменную для количества чисел
    int number; // Объявляем переменную для текущего числа
    long long product_even = 1, product_odd = 1; // Инициализируем произведение четных и нечетных чисел
    int has_even = 0, has_odd = 0; // Флаги, указывающие на наличие четных и нечетных чисел

    printf("Введите количество чисел N: "); // Запрашиваем ввод количества чисел
    scanf("%d", &N); // Считываем значение N

    if(N <= 0) { // Проверяем, что количество чисел положительное
        printf("Ошибка: количество должно быть положительным.\n"); // Выводим сообщение об ошибке
        return 1; // Завершаем программу с кодом ошибки
    }

    for(int i = 1; i <= N; i++) { // Запускаем цикл для ввода N чисел
        printf("Введите число #%d: ", i); // Запрашиваем ввод текущего числа
        scanf("%d", &number); // Считываем число
        if(number % 2 == 0) { // Проверяем, является ли число четным
            product_even *= number; // Умножаем число на произведение четных чисел
            has_even = 1; // Устанавливаем флаг наличия четных чисел
        } else { // Если число нечетное
            product_odd *= number; // Умножаем число на произведение нечетных чисел
            has_odd = 1; // Устанавливаем флаг наличия нечетных чисел
        }
    }

    if(has_even) { // Если были введены четные числа
        printf("Произведение четных чисел: %lld\n", product_even); // Выводим произведение четных чисел
    } else { // Если четных чисел не было
        printf("Четных чисел не было введено.\n"); // Выводим соответствующее сообщение
    }

    if(has_odd) { // Если были введены нечетные числа
        printf("Произведение нечетных чисел: %lld\n", product_odd); // Выводим произведение нечетных чисел
    } else { // Если нечетных чисел не было
        printf("Нечетных чисел не было введено.\n"); // Выводим соответствующее сообщение
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