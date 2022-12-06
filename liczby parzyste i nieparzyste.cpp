// ConsoleApplication29.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;

void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << ",";
	}
	cout << endl;
}
vector<int>parzyste(vector<int>tab)
{
	vector<int>podzielne;
	vector<int>niepodzielne;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % 2 == 0)
		{
			podzielne.push_back(tab[i]);
		}
	}
	return podzielne;
}
vector<int>nieparzyste(vector<int>tab)
{
	vector<int>niepodzielne;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i]%2==1)
		{
			niepodzielne.push_back(tab[i]);
		}
	}
	return niepodzielne;
}
int main()
{
	vector<int>tab = { 1,2,3,4,5,6,7,8 };
	wypisz(parzyste(tab));
	cout << 5 << endl;
	wypisz(nieparzyste(tab));

}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
