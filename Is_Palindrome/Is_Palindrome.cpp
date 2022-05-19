#include <iostream>
#include <string>

using namespace std;

string isPalindrome(string str1) {
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == ' ') str1.erase(i, 1);
    }
    string str2 = str1;
    reverse(str2.begin(), str2.end());
    return (str1 == str2) ? "это палиндром" : "это не палиндром";
}

int main()
{
    /* Ввести с клавиатуры число или 'a toyota race fast safe car a toyota'
    и определить, является ли оно палиндромом. */

    setlocale(0, "rus");

    string str;

    cout << "Введите слово или число: ";
    getline(cin, str);

    cout << str << " - " << isPalindrome(str) << "\n";
}