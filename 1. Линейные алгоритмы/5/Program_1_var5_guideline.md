# Пояснения по лабораторной работе №1

Эта работа является вводной и демонстрирует основы языка C. В ней нужно решить простенькую математическую задачку о движении машин навстречу друг другу.

Разберём код решения этой задачи.
```c
#include <stdio.h> // Подключение основной библиотеки в языке для ввода/вывода
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем основную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода в консоли русских символов

    double V, V2, S, T; // Объявляем переменные для скоростей автомобилей и времени

    printf("Введите скорость первого автомобиля (V): "); // Выводим запрос на ввод скорости первого автомобиля
    scanf("%lf", &V); // Читаем скорость первого автомобиля и сохраняем её значение
    printf("Введите скорость второго автомобиля (V2): "); // Выводим запрос на ввод скорости второго автомобиля
    scanf("%lf", &V2); // Читаем скорость второго автомобиля и сохраняем её значение
    printf("Введите начальное расстояние между автомобилями (S): "); // Выводим запрос на ввод начального расстояния между автомобилями
    scanf("%lf", &S); // Читаем начальное расстояние между автомобилями и сохраняем его значение
    printf("Введите время в часах (T): "); // Выводим запрос на ввод времени в часах
    scanf("%lf", &T); // Читаем время и сохраняем его значение

    double distance = S - (V + V2) * T; // Вычисляем и сохраняем расстояние между автомобилями после T часов
    printf("Расстояние между автомобилями через %lf часов будет: %lf км\n", T, distance); // Выводим расстояние между автомобилями после T часов

    return 0; // Завершаем выполнение программы с возвращением 0
}
// Вывод в результате отрицательного расстояния будет означать то, что машины встретились и поехали в разные стороны
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

Вот и всё — первая работа вышла совсем простой, как это и должно быть. Удачи в дальнейшем изучении языка!

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)