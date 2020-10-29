﻿#include <iostream>
using namespace std;

int fact(int N)
{
    if (N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля
    else // Во всех остальных случаях
        return N * fact(N - 1); // делаем рекурсию.
}

int main()
{
    int N;
    setlocale(0, ""); // Включаем кириллицу
    cout << "Введите число для вычисления факториала: ";
    cin >> N;
    cout << N << " = " << fact(N) << endl << endl; // fact(N) - функция для вычисления факториала.
    return 0;
}