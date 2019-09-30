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
	//CreateArray();

	string s;
	int size = 0, op;
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
/*
	cout << "Paina 1 siirtyäksesi enkryptaukseen." << endl;
	cout << "Valinta: ";
	cin >> op;
	switch (op) {
	case 1:
		

		break;
	default:
		cout << "Väärin kirjoitettu tymhä.";

	}*/
	
}
void CreateArray() {

	int num1copy = 0;
	int num2copy = 0;
	int num3copy = 0;
	for (size_t i = 0; i < 26; i++)
	{
	createNewNumbers:
		int num1 = GetRandom();
		int num2 = GetRandom();
		int num3 = GetRandom();

		if (num1copy != num1 && num2copy != num2 && num3copy != num3) {
			encryptedchars[i] += encryptedchars1[num1];
			encryptedchars[i] += encryptedchars1[num2];
			encryptedchars[i] += encryptedchars1[num3];
		}
		else {
			goto createNewNumbers;
		}
		num1copy = num1;
		num2copy = num2;
		num3copy = num3;

	}
	}
int GetRandom() {
	int max = 26;
	int min = 0;
	return rand() % (max - min);
}
