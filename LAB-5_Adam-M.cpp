#include <iostream>
using namespace std;

int main() {

	//Zad.1

		/*int a, b, c, d, e, f, g, h, i, j;
		cout << "Podaj 10 liczb calkowitych do tablicy:\n";
		cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
		int tab[10] = {j, i, h, g, f, e, d, c, b, a};
		cout << "Wprowadzona tablica: \n";
		for (int k = 0; k < 10; k++) {
			cout << tab[k] << " ";
		}
	}*/

	//Zad.2

	/*int f;
	cout << "Jak dlugi ma byc kod fibonacciego?:\n";
	cin >> f;
	int* tab = new int[f];
	tab[0] = 0;
	if (f < 1) {
		cout << "Niepoprawna wartosc :c";
		return 0;
	}
	else if (f == 1) {
		cout << "Kod: \n";
		cout << tab[0] << " ";
	}
	else if (f == 2) {
		tab[1] = 1;
		cout << "Kod: \n";
		cout << tab[0] << " " << tab[1] << " ";
	}
	else {
		tab[1] = 1;
		for (int k = 2; k < f; k++) {
			tab[k] = tab[k - 1] + tab[k - 2];
		}
		cout << "Kod: \n";
		for (int k = 0; k < f; k++) {
			cout << tab[k] << " ";
		}
	}
	delete tab;
}*/

//Zad.3

	/*int tab[10] = {0};
	float suma = 0;
	for (int i = 0; i < 10; i++) {
		int losowe = rand();
		tab[i] = losowe;
		suma += tab[i];
	}
	float średnia = suma / 10;
	cout << "Srednia: " << średnia << endl;
	int n = 0;
	for (int i = 0; i < 10; i++) {
		if (tab[i] < średnia) {
			n++;
		}
	}
	cout << "Liczba elementow mniejszych od sredniej: " << n << endl;
	int min = tab[0];
	int max = tab[0];
	for (int i = 1; i < 10; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	cout << "Element najmniejszy (min): " << min << endl;
	cout << "Element najwiekszy (max): " << max << endl;
	return 0;
	delete tab;
}*/

//Zad.4

	/*int n;
	float suma = 0.0;
	cout << "Podaj ile elementow [0,10]:\n";
	cin >> n;
	if (n < 0 || n > 10) {
		cout << "Liczba spoza zakresu :c" << endl;
		return 0;
	}
	else {
		float tab[10] = { 0 };
		for (int i = 0; i < n; i++) {
			cout << "Podan watorsc zbioru: ";
			cin >> tab[i];
		}
		for (int i = 0; i < 10; i++) {
			suma += tab[i];
		}
		float średnia = suma / 10;
		cout << "Srednia: " << średnia << endl;
		int min = tab[0];
		int max = tab[0];
		for (int i = 1; i < 10; i++) {
			if (tab[i] < min) {
				min = tab[i];
			}
			if (tab[i] > max) {
				max = tab[i];
			}
		}
		cout << "Element najmniejszy (min): " << min << endl;
		cout << "Element najwiekszy (max): " << max << endl;
		return 0;
	}
}*/

//Zad.5

int tab[10] = { 0 };
int l = 0;
for (int i = 0; i < 10; i++) {
	int losowe = rand() % 11;
	tab[i] = losowe;
}
int szcz = rand() % 11;
for (int i = 0; i < 10; i++) {
	if (tab[i] = szcz) {
		l++
	}
	cout << "Losowy szczensliwy numerek zostal wylosowany "