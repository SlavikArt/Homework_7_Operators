#include <iostream>

using namespace std;

bool isDivBy357(int num) {
	return (num % 3 == 0
		&& num % 5 == 0
		&& num % 7 == 0) ? true : false;
}

int main()
{
	/* Ввести число и определить
	кратно ли оно 3, 5, и 7 одновременно. */

	setlocale(0, "rus");

	int num;

	cout << "Введите число: ";
	cin >> num;

	cout << boolalpha << "Число делится на 3,5,7 одновременно - " << isDivBy357(num) << "\n";
}