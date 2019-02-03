#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;
int liczba, strzal, ile_prob;

int main()
{
	setlocale(LC_ALL, "");
	cout << "Witaj! Pomyślałam sobie liczbę od 1 do 100" << endl;
	
	srand(time(NULL));
	liczba = (rand() % 100) + 1;

	while(strzal!=liczba)
	{
		ile_prob++;

		cout << "Zgadnij jaka (to twoja " << ile_prob << " proba) : ";
		cin >> strzal;
		if (strzal == liczba)
			cout << "Udało Ci się trafić! Wygrywasz w "<<ile_prob <<" probie :) "<<endl;
		else if (strzal < liczba)
			cout << "To za mało" << endl;
		else if (strzal > liczba)
			cout << "To za duzo" << endl;

		}
	system("pause");
		return 0;
}