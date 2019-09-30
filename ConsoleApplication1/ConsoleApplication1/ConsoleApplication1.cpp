#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;
string encryptedchars1[] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
string encrupedchar11 = "abcdefghijklmnopqrstuvwxyz";
string encryptedchars[26] = { "abd", "asd","kod", "uds", "kds", "dse", "dka", "yhr", "daj", "fkl", "enr","kof", "kta", "knh", "dak", "dan" , "mal", "ojn", "amm", "evn", "dmf", "ekt", "aot", "nge", "dao", "dak" };
string encryptedMessage = "";
void CreateArray();
int GetRandom();
void main()
{
	setlocale(LC_ALL, "Finnish");

	string s;
	int size = 0, op;


	cout << "Paina 1 siirtyäksesi enkryptaukseen." << endl;
	cout << "Valinta: ";
	cin >> op;
	switch (op) {
	case 1:
			cout << "Syötä salainen viesti: ";
	cin >> s;
	size = s.length();

	for (int i = 0; i < size; i++)
	{

		int found = encrupedchar11.find(s[i]);
		encryptedMessage += encryptedchars[found];
		//if (found != string::npos) {
		//}
	}

	cout << encryptedMessage << endl;
	cout << "Viesti enkryptattu!" << endl;

		break;
	default:
		cout << "Väärin kirjoitettu tymhä.";

	}
	
}
