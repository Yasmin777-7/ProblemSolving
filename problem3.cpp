#include <iostream>
#include <string>
using namespace std;
enum enPerfectNumberStatus {Perfect =1, NotPerfect=2};

int ReadPositiveNumber(string Message) {

	int Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number<=0);

	return Number;
}

int CheckPerfectNumber(int Number) {

    int sum = 0;
	
	for (int i = 1; i < Number ; i++)
	{
		if (Number % i == 0)
			sum = sum + i;
		if (Number == sum)
			return enPerfectNumberStatus::Perfect;
	}
	return enPerfectNumberStatus::NotPerfect;
}

void PrintResults(int Number) {

	if (CheckPerfectNumber(Number) == enPerfectNumberStatus::Perfect)
		cout << Number << " is Perfect";
	else
		cout << Number << " is Not Perfect";
}

int main() {
	
	PrintResults(ReadPositiveNumber("Enter the Number ? "));

	return 0;
}
