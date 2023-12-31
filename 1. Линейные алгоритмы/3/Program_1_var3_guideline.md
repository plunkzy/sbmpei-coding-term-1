# Пояснения по лабораторной работе №1

Эта работа охватывает использование основ языка C для выполнения математических операций, связанных с вычислением пути, пройденного лодкой. Здесь мы рассмотрим, как осуществлять ввод данных, работать с условными операторами (только самая база, подробнее —  в следующих работах) и выполнять простые математические расчеты.

Разберём код решения этой задачи.
```c
#include <stdio.h> // Подключение библиотеки для стандартного ввода/вывода
#include <windows.h> // Подключение модуля windows.h для корректного отображения кириллицы в консоли Windows

int main() { // Объявляем основную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода текста на кириллице в консоли Windows

    float V, U, T1, T2; // Объявляем переменные для скорости лодки, скорости течения реки и времени движения

    printf("Введите скорость лодки в стоячей воде (V) в км/ч: "); // Запрашиваем у пользователя скорость лодки в стоячей воде
    scanf("%f", &V); // Считываем введенное значение скорости лодки
    printf("Введите скорость течения реки (U) в км/ч: "); // Запрашиваем у пользователя скорость течения реки
    scanf("%f", &U); // Считываем введенное значение скорости течения
    printf("Введите время движения по озеру (T1) в часах: "); // Запрашиваем время движения по озеру
    scanf("%f", &T1); // Считываем введенное время движения по озеру
    printf("Введите время движения по реке против течения (T2) в часах: "); // Запрашиваем время движения по реке против течения
    scanf("%f", &T2); // Считываем введенное время движения по реке

    if (U >= V) { // Проверяем, чтобы скорость течения была меньше скорости лодки
        printf("Скорость течения должна быть меньше скорости лодки.\n"); // Выводим сообщение об ошибке, если условие не соблюдено
        return 1; // Завершаем программу с кодом ошибки 1
    }

    float distanceLake = V * T1; // Рассчитываем путь, пройденный по озеру
    float distanceRiver = (V - U) * T2; // Рассчитываем путь, пройденный по реке против течения
    float totalDistance = distanceLake + distanceRiver; // Вычисляем общий пройденный путь

    printf("Общий путь, пройденный лодкой: %.2f км\n", totalDistance); // Выводим общий пройденный путь

    return 0; // Завершаем программу с успешным кодом возврата 0
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

Первая работа, как это и должно быть, вышла совсем простой. Удачи в дальнейшем изучении!

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)