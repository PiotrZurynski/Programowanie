// ConsoleApplication31.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// wymyslenie przykladu
// sprawdzenie czy jest kompletny
// sfromalizowanie przykladu
// naglowek funckji
// cialo funkcji
// nie wiesz co robic zabij sie
// 
//

#include <iostream>
#include <vector>
using namespace std;

bool czynalezy(vector<int>tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}
	return false;
}
bool czyzawiera(vector<int>tab1, vector<int>tab2)
{
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!czynalezy(tab1, tab2[i]))
		{
			return false;
		}
	}
	return true;
}
vector<int>unikalnosc(vector<int>tab)
{
	vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!czynalezy(wynik, tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << ",";
	}
	cout << endl;
}
int max(vector<int>tab)
{
	int wynik = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] > wynik)
		{
			wynik = tab[i];
		}
	}
	return wynik;
}
double suma(vector<int>tab)
{
	int sumka = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		sumka += tab[i];
	}
	return sumka;
}
float avg(vector<int>tab)
{
	float srednia = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		srednia = (suma(tab) / tab.size());
	}
	return srednia;
}
vector<int>podzielne(vector<int>tab,int dzielnik)
{
	vector<int>wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % dzielnik == 0)
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
int main()
{
	vector<int>tab = { 1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8 };
	vector<int>tab1 = { 1,2,3,4,5,6,7,8 };
	vector<int>tab2 = { 1,2,3 };
	int element = 4;
	wypisz(tab);
	wypisz(unikalnosc(tab));
	wypisz(podzielne(tab,4));
	double wynik = suma(tab);
	int wynik1 = max(tab);
	int wynik2 = czynalezy(tab, element);
	int wynik3 = czyzawiera(tab1, tab2);
	float wynik4 = avg(tab);
	cout << wynik << endl;
	cout << wynik1 << endl;
	cout << wynik2 << endl;
	cout << wynik3 << endl;
	cout << wynik4 << endl;
	
	
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
