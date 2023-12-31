# Инструкция по публикации новых работ в репозиторий

Этот репозиторий является частью нашей образовательной среды. Вы можете
публиковать здесь свои решения нерешённых задач, отправляя их через Pull Request.
Ниже мы подготовили правила публикации, чтобы все решения в репозитории были однотипны
и понятны обывателю.

## Об общей структуре репозитория

При публикации решений необходимо придерживаться общей структуры репозитория.

- Папка с номером и названием лабораторной работы (например, "1. Линейные алгоритмы")
- - Папка с номером варианта для этой работы (например, "15")
- - - Файл с решением с типовым названием Program_X_varY.c, где X – номер работы, Y – номер варианта (например, "Program_1_var15.c")
- - - Файл с пояснениями с типовым названием Program_X_varY_guideline.md, где X – номер работы, Y – номер варианта (например, "Program_1_var15_guideline.md")

Разберём общие требования к указанным файлам.

## Требования к файлам с решениями

В начале каждого файла должен быть соответствующий комментарий с номером и названием
лабораторной работы, номером задания и его текстом, датой публикации и подписью. Пример такого комментария:
```c
//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №17: "Найти корни квадратного уравнения A*X^2+B*X+C=0"
// Опубликовано 07.12.2023
// plunkzy education (by plunkzy)
//
```

Название лабораторной, номер варианта, текст задания берутся из сборника задач.
Если Вы желаете остаться анонимным при публикации, уберите текст в скобках (вместе со скобками) после plunkzy education.

Далее в файле должно идти решение задачи на языке C (или на C++ в случае явного указания
на необходимость использования ООП в названии или тексте работы). Обязательным элементом
решения является установка русской кодировки для консоли:
```c
#include <windows.h>
...

int main() {
    SetConsoleOutputCP(CP_UTF8);
    ...
}
```

Код в этом файле не должен содержать комментариев. Все комментарии должны следовать в файле с пояснениями.

Кроме того, весь написанный код должен использовать стандартные функции языка C. Не допускается
использование специфичных функций IDE вроде printf_s(); scanf_s() и т.д.

> Мы понимаем, что результат выполнения программы на языке C на деле сильно зависит от компилятора,
> с которым работает пользователь. Именно поэтому мы просим использовать общие для всех компиляторов функции и методы.
> Пользователь сам внесёт правки, если потребуется.

## Требования к файлам с пояснениями

Для каждой лабораторной работы существует типовой файл с пояснениями, в котором необходимо
изменять только код на Ваш. Этот файл можно найти в папках с вариантом №1 в каждой лабораторной работе.
Если вариант №1 ещё не решен, ориентируйтесь на вариант №15. Если к решению этой лабораторной работы
вообще никто не приступал, используйте собственный шаблон, составленный на основе других работ с учётом
правок.

Каждая строка в коде, который Вы вставляете в файл с пояснениями, должна быть откомментирована.
Комментарии пишутся в первом лице, множественном числе, в настоящем времени (например, "// Объявляем главную функцию")
(за исключением подключения библиотек: там типовой комментарий "Подключение библиотеки для...").
Комментарий должен быть написан с большой буквы и пробелом после двойного слеша.

Вот типовые комментарии для строк, которые присутствуют в большинстве решений:
```c
#include <stdio.h> // Подключение библиотеки для ввода/вывода
#include <math.h> // Подключение библиотеки для математических функций
#include <windows.h> // Подключение модуля windows.h для установки кодировки вывода

int main() { // Объявляем главную функцию
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем кодировку UTF-8 для вывода русских символов
    printf("..."); // Выводим... [указать, что выводим]
    scanf("..."); // Считываем... [указать, что считываем]
    double a, b,  c; // Объявляем переменные для... [указать, что будет храниться в переменных]
    return 0; // Завершаем программу с кодом 0
} // <--- Закрывающие скобки не комментируются!
```