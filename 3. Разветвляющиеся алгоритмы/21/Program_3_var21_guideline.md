# Пояснения по лабораторной работе №3

Эта лабораторная работа учит нас простейшей работе с условными операторами в языке C.
Вот то, про что нужно почитать перед началом:
1. Условные операторы: if, else if, else, **сокращённая запись условий!**
2. Способы вывода форматированных строк (в частности, форматирование числовых переменных внутри printf())
3. Дополнительная информация ситуативно к задаче: например, правила игры в шахматы (полезно и для общего развития!)

> [!TIP]
> Дополнительные пояснения по конструкциям, которые могут встречаться в ходе решения данной лабораторной работы:
> 1. **Проверка, равен ли scanf() числу.** Функция scanf() возвращает число успешно записанных переменных. Подобная конструкция является аналогом "проверки на число": если ввести строку в переменную типа int, scanf() не вернёт единицу (или любое другое число, равное количеству переменных для записи).
> 2. **Знаки вопросов и двоеточия в условиях прямо внутри переменных.** Это сокращённая запись условного оператора if-else. Структура такого оператора: "условие ? значение_если_истина : значение_если_ложь"
> 3. **Переменная с двумя знаками плюса или минуса.** Эквивалентно прибавлению или вычитанию единицы (a = a + 1 — то же самое, что и a++).+
> 4. **Тип переменной прямо перед переменной.** Это принудительное изменение типа переменной. (double)a превратит переменную a в тип double, если это возможно.

Разберём код решения задачи.
```c
#include <stdio.h> // Подключение библиотеки для ввода/вывода
#include <math.h> // Подключение библиотеки для математических функций
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода русских символов

    double d1, d2, angle_deg; // Объявляем переменные для диагоналей и угла в градусах
    double angle_rad, area; // Объявляем переменные для угла в радианах и площади
    double a, b, c, d; // Объявляем переменные для сторон (неиспользуются в данном решении)

    printf("Введите длины диагоналей (d1 d2) и угол между ними в градусах: "); // Запрос на ввод данных
    scanf("%lf %lf %lf", &d1, &d2, &angle_deg); // Считываем диагонали и угол

    angle_rad = angle_deg * M_PI / 180.0; // Переводим угол в радианы
    area = (d1 * d2 * sin(angle_rad)) / 2.0; // Вычисляем площадь четырехугольника

    // Определение вида четырехугольника
    if (fabs(angle_deg - 90.0) < 1e-6) { // Если угол равен 90 градусам
        printf("Четырехугольник является прямоугольником.\n"); // Выводим, что это прямоугольник
    } else if (fabs(d1 - d2) < 1e-6 && fabs(angle_deg - 90.0) < 1e-6) { // Если диагонали равны и угол 90 градусов (возможно, с погрешностью до 1e-6, это особенности C)
        printf("Четырехугольник является квадратом.\n"); // Выводим, что это квадрат
    } else { // В остальных случаях
        printf("Четырехугольник является произвольным.\n"); // Выводим, что это произвольный четырехугольник
    }

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

Третья работа — несложная. Главное — внимательно прочитать условие задачи, чтобы правильно составить алгоритм.

> [!TIP]
> По всем вопросам можно [обращаться ко мне в Telegram](https://t.me/plunkzy)