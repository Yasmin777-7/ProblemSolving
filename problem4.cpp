#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

void PrintDigints(int Number) {

	int sum = 0;
	int Remainder = 0;

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;
		sum += Remainder;
	}
	cout << "Sum Of Digits = " << sum << endl;
}

int main() {

	PrintDigints(ReadPositiveNumber("Please enter a positive Number ? "));

	return 0;
}
