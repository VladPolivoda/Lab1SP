#include <iostream>
#include <cmath>
#include <locale>

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif

int main() {
    // Встановлення локалі для коректного відображення тексту
    system("chcp 65001");
    std::locale::global(std::locale(""));

    // Завдання А
    // Введення змінної a
    double a;
    std::wcout << L"Завдання А. Введіть значення a: ";
    std::cin >> a;

    // Розрахунок змінної z_1
    double z_1 = 2 * pow(sin(3 * M_PI - 2 * a), 2) - pow(cos(5 * M_PI - 2 * a), 2);

    // Виведення результату
    std::wcout << L"Результат для z_1: " << z_1 << std::endl;

    // Завдання Б
    // Введення значення a перед введенням змінних a, c, x, b
    std::wcout << L"\nЗавдання Б. Введіть значення a: ";
    std::cin >> a;

    double c, x, b;
    std::wcout << L"Введіть значення c: ";
    std::cin >> c;
    std::wcout << L"Введіть значення x: ";
    std::cin >> x;
    std::wcout << L"Введіть значення b: ";
    std::cin >> b;

    // Розрахунок змінної M
    double M = exp(-c * x) * ((x + pow(x + a, 1.0 / 3.0)) / (x - sqrt(fabs(x - b))));

    // Виведення результату
    std::wcout << L"Результат для M: " << M << std::endl;

    return 0;
}
