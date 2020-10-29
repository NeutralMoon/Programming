#include <iostream>
#include <clocale>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int n, a;
    cout << "Введите число: "; cin >> n;
    cout << "Введите степень: "; cin >> a;
    int nsave = n;
    if (a == 0) { cout << 1; return 0; }
    for (int i = 1; i < a; i++)
    {
        n *= nsave;
    }
    cout << n;
}