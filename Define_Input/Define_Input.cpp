#include <iostream>

using namespace std;

string whatIsIt(char sym) {
	if (isdigit(sym)) {
		return "цифра";
	}
	else if (isalpha(sym)) {
		if(isupper(sym))
		{
			return "заглавная буква";
		}
		return "буква";
	}
	else {
		return "знак пунктуации";
	}
}

int main()
{
	/* Ввести с клавиатуры символ.
	Определить, чем он является:
	цифрой, буквой или знаком пунктуации. */

	setlocale(0, "rus");

	char symbol;

	cout << "Введите символ: ";
	cin >> symbol;

	cout << symbol << " - это " << whatIsIt(symbol) << "\n";
}