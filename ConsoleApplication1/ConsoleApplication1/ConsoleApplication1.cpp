#include <iostream>
#include <string>
#include "encryperDecrypter.h"
#include <stdlib.h>
using namespace std;
void main() {
	CreateArray();
}
void CreateArray() {
	int length = 26;
	string alphabet1[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
	//string *Alphabet = new string[length]
	string alphabet[2][26];
	int num1copy = 0;
	int num2copy = 0;
	int num3copy = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (i == 0) {
				alphabet[i][j] = alphabet1[j];
				cout << alphabet[i][j] << endl;
			}
			else {
				createNewNumbers:
				int num1 = GetRandom();
				int num2 = GetRandom();
				int num3 = GetRandom();
				if (num1copy != num1 && num2copy != num2 && num3copy != num3) {
					alphabet[i][j] += alphabet1[num1];
					alphabet[i][j] += alphabet1[num2];
					alphabet[i][j] += alphabet1[num3];
				}
				else {
					goto createNewNumbers;
				}
				num1copy = num1;
				num2copy = num2;
				num3copy = num3;
				cout << alphabet[i][j] << endl;
			}
		}
	}
}
int GetRandom() {
	int max = 26;
	int min = 0;
	return rand() % (max - min);
}