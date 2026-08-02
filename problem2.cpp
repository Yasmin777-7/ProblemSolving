#include <iostream>
#include <string>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

int PeadPositiveNumber(string Message){

	int Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
	}

enPrimNotPrime CheckPrime(int Number) {

	int M = round(Number / 2);

	for (int i = 2; i <=M; i++)
	{
		if (Number % i == 0)
			return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number) {

	cout << endl;

	cout << "Prime Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl;

	for (int i = 1; i <=Number; i++)
	{
		if (CheckPrime(i) == enPrimNotPrime::Prime)
			cout << i << endl;

	}
}

int main() {
	PrintPrimeNumbersFrom1ToN(PeadPositiveNumber("Please enter a positive number ?"));

	return 0;
}
