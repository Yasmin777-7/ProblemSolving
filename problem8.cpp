#include <iostream>
#include <string>

using namespace std;

void PrintWordsFromAAAtoZZZ() {
	
	cout << endl;
	
	for (int i = 65; i <= 90; i++)
	{
		for (int j =65 ; j <=i; j++)
		{
			for (int counter = 65 ; counter <= j; counter++){

                cout << char(i) << char(j) <<char(counter)<< endl;
            }
		}
		
	}
}

int main() {
	PrintWordsFromAAAtoZZZ();

	return 0;

}
