#include <iostream>

using namespace std;

int howMuchNumbers(int num) {
    int k = 0;
    while (num > 0)
    {
        num /= 10;
        k++;
    }
    return k;
}

int main()
{
    /* Вводится целое число.
    Определить количество цифр в нём. */

    setlocale(0, "rus");

    int num;

    cout << "Введите число (целое, любое): ";
    cin >> num;

    cout << "В числе " << num << " - " << howMuchNumbers(num) << " цифр\n";
}
