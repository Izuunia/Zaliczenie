#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	using namespace std;

	char wybor;

	cout << "Podaj znak: "; cin >> wybor;
	if (wybor >= 97 && wybor <= 122)
		cout << "MALA LITERA! " << " Musimy ją Zamienić na Wielką " << (char)(wybor-32) << endl;
	else if (wybor >= 65 && wybor <= 90)
		cout << "DUZA LITERA!" << endl;
	else if (wybor >= 48 && wybor <= 57)
		cout << "CYFRA!" << endl;
	else
		cout << "Niestety, nie znam tego znaku" << endl;


	system("pause");
	return 0;
}