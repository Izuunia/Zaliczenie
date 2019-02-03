#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	setlocale(LC_ALL, "");

	std::string s;
	std::string theChoosenOne;

	while (true)
	{
		std::fstream plik("data.txt");
		std::ofstream oplik("data.txt", std::ios::app);

		std::cout << "\n\n Hej, twój plik zawiera:\n\n";
		while (!plik.eof())
		{
			plik >> s;
			std::cout << s << '\n';
		}

		std::cout << "Dodaj coś od siebie ('/' kończy działanie programu): ";
		std::getline(std::cin, theChoosenOne);
		if (theChoosenOne != "/")
			oplik << '\n' << theChoosenOne;
		else
			break;
	}

	system("pause");
	return 0;
}