//Program który prosi o wprowadzenie ze standardowego wejscia łańcucha do tablicy, wyswietla długosc wprowadzonego ciagu.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	char s[12], t[12], st[24];
	int dlugosc1, dlugosc2;
	cout << "Wprowadź pierwszy ciąg znaków" << endl;
	cin >> s;
	cout << "Wprowadź drugi ciąg znaków" << endl;
	cin >> t;
	int i = 0;
	while (s[i] != '\0')
		i++;
	dlugosc1 = i;
	cout << "Długość pierwszej tablicy ze znakiem NULL:   " << dlugosc1 + 1 << endl;
	int j = 0;
	while (t[j] != '\0')
		j++;
	dlugosc2 = j;
	cout << "Długość drugiej tablicy ze znakiem NULL:    " << dlugosc2 + 1 << endl;
	int k;
	for (k = 0; k < dlugosc1; k++)
	{
		st[k] = s[k];
	}
	for (k = dlugosc1, j = 0; k <= dlugosc1 + dlugosc2, j <= dlugosc2; k++, j++)
	{
		st[k] = t[j];
	}
	cout << endl << "Tablica polczona:   " << st << endl;
	cout << "\nDługość tablicy połączonej wraz z znakiem NULL :  " << k << endl;
	getchar();
	getchar();
	cout << "\n Tablica połączona:  " << st << endl;
	getchar();
	getchar();

	return 0;
}

