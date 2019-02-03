#include "pch.h"
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int sek, min, godz, d;
int main()
{	
	setlocale(LC_ALL, "");
	int liczby[10], minimalna = 0, maxymalna = 0,
	sek = (time(NULL));
	srand(time(NULL));	

	min = sek / 60;
	sek = sek - min * 60;
	godz = min / 60;
	min = min - godz * 60;
	d = godz / 24; godz = godz - d * 24;
	cout << "Od 1 stycznia 1970 r. godz. 0:0:0 GMT uplynelo " << d/364 << " lat" << endl;
	cout << "Od 1 stycznia 1970 r. godz. 0:0:0 GMT uplynelo "<<d<<" Dni"<< endl;
	cout << "Od 1 stycznia 1970 r. godz. 0:0:0 GMT uplynelo " << (time(NULL)) << " Sekund" << endl;
	Sleep(1000);
	time_t czas;  time(&czas);
	
	cout << "Losuję 10 liczb całkowitych: " << endl;
	for (int i = 0; i < 10; i++)
	{
		liczby[i] = rand();
		cout << liczby[i] << " ";
		Sleep(1000);
	}
	minimalna = liczby[0];
	for (int i = 0; i < 10; i++)
	{
		if (liczby[i] < minimalna)
			minimalna = liczby[i];
	}
	cout << endl;
	maxymalna = liczby[0];
	for (int i = 0; i < 10; i++)
	{
		if (liczby[i] > maxymalna)
			maxymalna = liczby[i];
	}

	cout << "Najmniejsza z tych liczb " << minimalna << endl;
	cout << "Najwieksza  z tych liczb " << maxymalna << endl;
	system("pause");
	return 0;
}
