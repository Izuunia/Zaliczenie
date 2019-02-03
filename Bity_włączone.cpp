#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int l;
int wyn;
int bity[8];
int x = 7;

int main()
{
	setlocale(LC_ALL, "");

	cout << "Podaj liczbę: ";
	cin >> l;


	do {
		wyn = l % 2;
		bity[x] = wyn;
		l = l / 2;
		x--;
	} while (l != 0);
	cout << "\nLiczba w zapisie binarnym:";
	for (x = 0; x < 8; x++)
	{
		cout << bity[x];
	}
	cout << endl;
	cout << "\nBity włączone: \n";
	for (x = 7; x >= 0; x--)
	{
		if (bity[x] == 1) cout << "\nWłączono bit nr: " << x << ".";
	}
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}