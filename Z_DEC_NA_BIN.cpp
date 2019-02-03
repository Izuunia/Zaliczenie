#include "pch.h"
#include <cstdlib>
#include <iostream>
using namespace std;
void dec_to_bin(int liczba)
{
	int i = 0, tab[31];

	while (liczba) //dopóki liczba będzie różna od zera
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << tab[j];
}

int main()
{
	setlocale(LC_ALL, "");

	int liczba;

	cout << "Podaj liczbę: ";
	cin >> liczba;

	cout <<"Liczba " <<liczba << " (dziesiętnie), po zamianie na postać binarną: ";
	dec_to_bin(liczba);
	cout << endl;

	system("pause");
	return 0;
}