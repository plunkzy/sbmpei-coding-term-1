# Пояснения по лабораторной работе №13

В данной лабораторной работе вы будете создавать программы на языке C, которые выполняют различные операции с одномерными массивами. Особенностью этой работы является наличие двух способов ввода массива: ручного и автоматического.

## Что нужно прочитать перед началом:
1. Основы работы с массивами
2. Циклы for, while для ввода
3. Генератор случайных чисел в языке C

## Разбор кода решения задачи

```c
#include <stdio.h>    // Подключение библиотеки для ввода/вывода
#include <stdlib.h>   // Подключение библиотеки для работы с функциями генерации случайных чисел
#include <time.h>     // Подключение библиотеки для работы со временем
#include <windows.h>  // Подключение модуля windows.h для установки кодировки вывода

int main() {
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для корректного отображения русских символов
    int n, choice; // Объявляем переменные для размера массива и выбора способа ввода
    float P, T, sum = 0; // Объявляем переменные для величин P, T, и суммы
    int count = 0; // Объявляем переменную для подсчета количества элементов

    printf("Введите значения P и T (P < T): "); // Запрашиваем ввод значений P и T
    scanf("%f %f", &P, &T);  // Считываем значения P и T
    if (P >= T) {  // Проверяем условие P < T
        printf("Ошибка: P должно быть меньше T.\n"); // Выводим сообщение об ошибке
        return 1; // Завершаем программу с кодом ошибки
    }

    printf("Введите размер массива X: "); // Запрашиваем ввод размера массива
    scanf("%d", &n);                        // Считываем размер массива

    float X[n]; // Объявляем массив X размером n

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): "); // Запрашиваем выбор способа ввода
    scanf("%d", &choice); // Считываем выбор

    if (choice == 1) { // Если выбран ручной ввод
        printf("Введите элементы массива X:\n");
        for (int i = 0; i < n; i++) { // Цикл для ввода элементов массива
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    } else if (choice == 2) { // Если выбран автоматический ввод
        srand(time(NULL)); // Инициализируем генератор случайных чисел
        printf("Сгенерированный массив X:\n");
        for (int i = 0; i < n; i++) { // Цикл для генерации элементов массива
            X[i] = (float)(rand() % 100) / 10; // Генерация чисел от 0.0 до 9.9
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    } else { // Если выбор некорректен
        printf("Некорректный выбор способа ввода.\n"); // Выводим сообщение об ошибке
        return 1; // Завершаем программу с кодом ошибки
    }

    for (int i = 0; i < n; i++) { // Цикл для проверки каждого элемента массива
        if (X[i] > P && X[i] < T) { // Условие: элемент больше P и меньше T
            sum += X[i]; // Добавляем элемент к сумме
            count++; // Увеличиваем счетчик
        }
    }

    printf("\nСумма элементов, удовлетворяющих условию: %.2f\n", sum); // Выводим сумму
    printf("Количество элементов, удовлетворяющих условию: %d\n", count); // Выводим количество

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