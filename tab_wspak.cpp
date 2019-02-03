#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "");
	char cwyraz[10];
	unsigned int literki = 0;
	cout << "Podaj wyraz (max 10 liter, najlepiej po każdym znaku zatwierdz enter, '/' konczy): ";

	for (int i = 0; i < 10; i++)
	{
		cin >> cwyraz[i];
		if (cwyraz[i] == '/')
		{
			cwyraz[i] == -52;
			literki = i;
			break;
		}
		literki = i + 1;
	}
	cout <<"Podałeś " << literki <<" Znaków. " << endl << endl;

	for (int i = literki - 1; i >= 0; i--)
	{
		cout << cwyraz[i];
	}
	cout << endl << endl;

	system("pause");
	return 0;
}