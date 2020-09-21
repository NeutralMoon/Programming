#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите два значения: ";
    if (cin >> a >> b)
    {
        cout << "Оригинальные значения: a = " << a << ", b = " << b << std::endl;
        int tmp = a;
        a = b;
        b = tmp;
        cout << "После смены: a = " << a << ", b = " << b << std::endl;
    }
    else
    {
        cout << "Ошибка" << std::endl;
    }
}