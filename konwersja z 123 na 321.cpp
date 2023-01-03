// ConsoleApplication54.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
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
vector<int>konwersja(int numer)
{
	vector<int>wynik;
	while (numer > 0)
	{
		wynik.push_back(numer % 10);
		numer /= 10;
	}
	return wynik;
	for (int i = 0; i < wynik.size(); i++)
	{
		cout << wynik[i];
	}

}
vector<int>suma(vector<int>l1, vector<int>l2)
{
	vector<int>l3;
	int zmienna = 0;
	for (int i = 0; i < l1.size(); i++)
	{
		l3.push_back(((l1[i] + l2[i]) % 10) + zmienna);
		zmienna = (l1[i] + l2[i]) / 10;
	}
	return l3;
}
int main()
{

	wypisz(konwersja(123));
	vector<int>l1 = konwersja(234);
	vector<int>l2 = konwersja(328);
	vector<int>l3 = suma(l1, l2);
	wypisz(l3);

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
