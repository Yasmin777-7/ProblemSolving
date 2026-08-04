#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber() {

	int Number;
	
	do {
		cout << "Please a positive Number ?" << endl;
		cin >> Number;
		
	} while (Number <= 0);
  
		return Number;
}

int ReadDigit() {

	int Digit;


		cout << "Enter the Digit Number : " << endl;
		cin >> Digit;

return Digit;
}

int DigitNumber(int Number,int Digit) {

	int counter = 0;
	int Remainder = 0; 

	while (Number > 0) {

		Remainder = Number % 10;
		Number = Number / 10;
		
		if (Remainder == Digit)
			counter++;
	}
	return counter;
}

int main() {

	int Number = ReadPositiveNumber();
	int Digit = ReadDigit();

	int counter = DigitNumber(Number, Digit);

	cout << "Digit " << Digit << " Frequency is " << counter << endl;

	return 0;
}
