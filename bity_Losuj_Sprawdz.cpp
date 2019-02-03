#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int liczba;
int wyn;
int bity[8];
int bitylos[8];
int x = 7;
int bit;
int ilerazywylosowano;
float srednia;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	cout << "Podaj liczbę: ";
	cin >> liczba;
	do {
		wyn = liczba % 2;
		bity[x] = wyn;
		liczba = liczba / 2;
		x--;
	} while (liczba != 0);
	cout << "Wybierz numer bitu: ";
	cin >> bit;
	cout << "Zawartość wybranego bitu: " << bity[bit] << endl;
	for (int y = 0; y < 10; y++)
	{
		cout << "\nLosuję liczbę ...";
		int liczbawylosowana = (std::rand() % 256) + 0;
		cout << liczbawylosowana;
		x = 7;
		do {
			wyn = liczbawylosowana % 2;
			bity[x] = wyn;
			liczbawylosowana = liczbawylosowana / 2;
			x--;
		} while (liczbawylosowana != 0);
		if (bity[bit] == bitylos[bit]) {
			cout << "   ...sukces! ";
			ilerazywylosowano++;
		}
	}
	srednia = ilerazywylosowano / 10.0;
	cout << "\n\nIlość losowań na sukces: " << srednia;
	system("pause");
	return 0;
}