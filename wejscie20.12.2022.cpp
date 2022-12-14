// ConsoleApplication37.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// wymyslenie przykladu
// tab1={1,2,3,4,5,6,7,8}
// tab2={1,2,3}
// sprawdzic czy jest komplenty
// sformalizowanie funkcji
// naglowek funkcji
// cialo funkcji
// nie wiesz co robic zabij sie
//

#include <iostream>
#include <vector>
#include <map>
#include<unordered_map>
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
void wypisz(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << ",";
	}
	cout << endl;
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
int suma(vector<int>tab)
{
	int sumka = 0;
	for (int i = 0; i < tab.size(); i++)
	{
		sumka += tab[i];
	}
	return sumka;
}
double avg(vector<int>tab)
{
	double srednia = 0.0;
	double srednik = suma(tab);
	srednia = srednik / tab.size();
	return srednia;
}
vector<int>podzielne(vector<int>tab, int dzielnik)
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
void czestosc(vector<int>tab)
{
	map<int, int>m;
	for (int i = 0; i < tab.size(); i++)
	{
		m[tab[i]]++;
	}
	for (auto& el : m)
	{
		cout << el.first << "->" << el.second << endl;;
	}
}
int main()
{
	int element = 4;
	vector<int>tab = { 1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,9 };
	vector<int>tab1= { 1,2,3,4,5,6,7,8 };
	vector<int>tab2= { 1,2,3 };
	wypisz(tab);
	wypisz(unikalnosc(tab));
	wypisz(podzielne(tab, 2));
	czestosc(tab);
	int wynik = max(tab);
	int wynik1 = czynalezy(tab, element);
	int wynik2 = czyzawiera(tab1, tab2);
	int wynik3 = suma(tab);
	double wynik4 = avg(tab);
	cout << wynik << endl;
	cout << wynik1 << endl;
	cout << wynik2 << endl;
	cout << wynik3 << endl;
	cout << wynik4 << endl;
	map<int, int>p;
	p.insert({ 8,1 });
	p.insert({ 7,2 });
	p.insert({ 1,2 });
	p.insert({ 2,2 });
	for (auto& el : p)
	{
		cout << el.first << "->" << el.second << endl;
	}


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
