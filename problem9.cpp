#include <iostream>
#include <string>

using namespace std;


string ReadText() {

	string Name;

	cout << "Enter the name ?" << endl;
	getline(cin, Name);

	return Name;
}

string EncryptText(string Name) {
	 
	for (int i = 0; i < Name.length(); i++) {

		Name[i] += 2;
		
	}

	return Name;
}

string DecryptText(string Name) {

	for (int i = Name.length() - 1; i >= 0; i--) {

		Name[i] -= 2;
	}
	return Name;
}

int main() {

	string Name = ReadText() ;

	cout << endl << "Text Before Encryption :" << Name << endl;
	cout << "Text After Encryption :" << EncryptText(Name) << endl;
	cout << "Text After Decryption :" << DecryptText(EncryptText(Name)) << endl;

	return 0;

}
