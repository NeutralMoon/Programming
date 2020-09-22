#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;

    cout << "Введите значения a и b: ";

    if (cin >> a >> b)
    {
        cout << "Оригинальные значения: a = " << a << ", b = " << b << endl;
        int tmp = a;
        a = b;
        b = tmp;
        cout << "После смены: a = " << a << ", b = " << b << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
    return 0;
}