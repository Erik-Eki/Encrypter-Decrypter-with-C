#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	string s;
	int key = 0, size = 0, op;
	char y;
	int *array;

	cout << "Paina 1 siirtyäksesi enkryptaukseen." << endl;
	cout << "Valinta: ";
	cin >> op;
	switch (op) {
	case 1:
		cout << "Syötä salainen viesti: ";
		cin >> s;
		cout << "\nEnter Key=>";
		cin >> key;
		size = s.length();
		array = new int[s.length()];
		cout << "Viesti enkryptattu!" << endl;
		for (int i = 0; i < size; i++)
			*(array + i) = s[i] + key;
		for (int i = 0; i < size; i++)
		{
			y = *(array + i);
			cout << array[i] << "\t" << y << endl;
		}
		delete[]array;
		break;
	default:
		cout << "Väärin kirjoitettu tymhä.";

	}
	cout << "\n\n\n\n\n";
	system("pause");
}