#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;
string encryptedchars1[] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
string encrupedchar11 = "abcdefghijklmnopqrstuvwxyz";
string encryptedchars[26] = { "abd", "asd","kod", "uds", "kds", "dse", "dka", "yhr", "daj", "fkl", "enr","kof", "kta", "knh", "dak", "dan" , "mal", "ojn", "amm", "evn", "dmf", "ekt", "aot", "nge", "dao", "dak"};
string encryptedMessage = "";
string encrypter();
void main();
string decrypter();
string DecryptedMessage;
void main()
{
	setlocale(LC_ALL, "Finnish");
	int op = 0;
	cout << "Paina 1 siirtyäksesi enkryptaukseen." << endl;
	cout << "Paina 2 siirtyäksesi decryptaukseen." << endl;
	cout << "Valinta: ";
	cin >> op;
	switch (op) {
	case 1:
		encryptedMessage = encrypter();
		main();
	case 2:
		DecryptedMessage = decrypter();
		main();
	default:
		cout << "Väärin kirjoitettu tymhä.";

	}


}
string encrypter() {
	encryptedMessage = "";
	string s;
	int size = 0;
	cout << "Syötä salainen viesti: ";
	cin >> s;
	size = s.length();


	for (int i = 0; i < size; i++)
	{

		int found = encrupedchar11.find(s[i]);
		if (found != string::npos) {
			encryptedMessage += encryptedchars[found];
		}
	}

	cout << "Encrypted message is: " << encryptedMessage << endl;
	return encryptedMessage;

}
string decrypter() {
	int length = encryptedMessage.length();
	int num1 = 0;
	string decryptedMessage;



	for (int i = 0; i < length / 3; i++)
	{
		string stringToFind;
		stringToFind += encryptedMessage.at(num1);
		stringToFind += encryptedMessage.at(num1 + 1);
		stringToFind += encryptedMessage.at(num1 + 2);
		for (int j = 0; j < 27; j++)
		{
			if (encryptedchars[j] == stringToFind) {
				decryptedMessage += encryptedchars1[j];
				num1 += 3;
				break;
			}

		}


	}
	cout << "Decrypted message is " << decryptedMessage << endl;
	return decryptedMessage;
}
