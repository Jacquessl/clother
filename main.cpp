//Clother
//char autor[11];
 //autor[0] = J
 //autor[1] = a
 //autor[2] = k
 //autor[3] = u
 //autor[4] = b
 //autor[5] = L
 //autor[6] = i
 //autor[7] = t
 //autor[8] = w
 //autor[9] = i
 //autor[10] = n
//Graphic interface will be avaliable in smt like 5 years



#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int ilek, ileb, iles, ilepb, ileck, ilegk;
int k, b, s, pb, kurtka, grk;

string o[10];
string l[10];
string p[10];
string u[10];
string r[10];
string g[10];

int temp;
int bluza, kurdka, gk, bk, bgk;


int main()
{
	//wstêp do aplikacji
	cout << "CLOTHER" << endl;
	cout << "Maksymalna ilosc ubran na kategorie to 100" << endl;

	//podajemy ilosc ubran z kazdej kategorii
	cout << "Podaj ilosc posiadanych koszulek: ";
	cin >> ilek;
	cout << "Podaj ilosc posiadanych bluz: ";
	cin >> ileb;
	cout << "Podaj ilosc posiadanych par spodni: ";
	cin >> iles;
	cout << "Podaj ilosc posiadanych par butow: ";
	cin >> ilepb;
	cout << "Podaj ilosc posiadanych cienkich kurtek: ";
	cin >> ileck;
	cout << "Podaj ilosc posiadanych grubych kurtek: ";
	cin >> ilegk;
	system("cls");

	//temperatury
	cout << "Od jakiej temperatury pora zalozyc bluze: ";
	cin >> bluza;
	cout << "Od jakiej temperatury pora zalozyc cienka kurtke: ";
	cin >> kurdka;
	cout << "Od jakiej temperatury pora zalozyc bluza i cienka kurtke: ";
	cin >> bk;
	cout << "Od jakiej temperatury pora zalozyc gruba kurtke: ";
	cin >> gk;
	cout << "Od jakiej temperatury pora zalozyc bluze i gruba kurtke: ";
	cin >> bgk;


	if (ilek > 100 || ileb > 100 || iles > 100 || ilepb > 100 || ilegk > 100 || ileck > 100)
	{
		//jezeli podana ilosc ubran jest wieksza niz mozliwa
		cout << "Podales nieprawidlowa ilosc\n";
		cout << "Sprobuj jeszcz raz";
		getchar();
	}

	else
	{

		//Wprowadzanie nazw koszulek
		cout << "Wprowadz nazwy swoich koszulek:\n";

		for (int i = 0; i < ilek; i++)
		{
			cout << "Koszulka " << i + 1 << ": ";
			cin >> o[i];
		}
		system("cls");


		//Wprowadznie nazw bluz
		cout << "Wprowadz nazwy swoich bluz:\n";

		for (int i = 0; i < ileb; i++)
		{
			cout << "Bluza " << i + 1 << ": ";
			cin >> l[i];
		}
		system("cls");


		//Wprowadzenie nazw spodni
		cout << "Wprowadz nazwy swoich par spodni:\n";

		for (int i = 0; i < iles; i++)
		{
			cout << "Spodnie " << i + 1 << ": ";
			cin >> p[i];
		}
		system("cls");


		//Wprowadzenie nazw butow
		cout << "Wprowadz nazwy swoich par butow:\n";

		for (int i = 0; i < ilepb; i++)
		{
			cout << "Buty " << i + 1 << ": ";
			cin >> u[i];
		}
		system("cls");

		//Wprowadzenie nazw ciekich kurtek
		cout << "Wprowadz nazwy swoich cienkich kurtek:\n";

		for (int i = 0; i < ileck; i++)
		{
			cout << "Cieka kurtka " << i + 1 << ": ";
			cin >> r[i];
		}
		system("cls");

		//Wprowadzenie nazw grubych kurtek
		cout << "Wprowadz nazwy swoich grubych kurtek:\n";

		for (int i = 0; i < ilegk; i++)
		{
			cout << "Gruba kurtka " << i + 1 << ": ";
			cin >> g[i];
		}
		system("cls");

		//podanie aktualnej temperatury

		cout << "Podaj aktualna temperature: ";
		cin >> temp;

		system("cls");
		//losowanie koszulki

		srand(time(NULL));

		k = rand() % ilek + 1;

		pb = rand() % ilepb + 1;

		grk = rand() % ilegk + 1;

		b = rand() % ileb + 1;

		kurtka = rand() % ileck + 1;

		s = rand() % iles + 1;

		if (temp > bluza)
		{
			cout << "Twoja koszulka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (k == i + 1)
				{
					cout << o[i];
				}
			}

			//losowanie spodni

			cout << "\nTwoje spodnie na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (s == i + 1)
				{
					cout << p[i];
				}
			}
			//losowanie butow


			cout << "\nTwoje buty na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (pb == i + 1)
				{
					cout << u[i];
				}
			}
		}

		if (temp <= bluza && temp > kurdka)
		{
			cout << "Twoja koszulka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (k == i + 1)
				{
					cout << o[i];
				}
			}

			//losowanie spodni

			cout << "\nTwoje spodnie na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (s == i + 1)
				{
					cout << p[i];
				}
			}
			//losowanie butow


			cout << "\nTwoje buty na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (pb == i + 1)
				{
					cout << u[i];
				}
			}
			//losowanie bluzy


			cout << "\nTwoja bluza na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (b == i + 1)
				{
					cout << l[i];
				}
			}
		}

		if (temp <= kurdka && temp > bk)
		{
			cout << "Twoja koszulka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (k == i + 1)
				{
					cout << o[i];
				}
			}

			//losowanie spodni

			cout << "\nTwoje spodnie na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (s == i + 1)
				{
					cout << p[i];
				}
			}
			//losowanie butow


			cout << "\nTwoje buty na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (pb == i + 1)
				{
					cout << u[i];
				}
			}
			//losowanie cienkiej kurtki


			cout << "\nTwoja cienka kurtka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (kurtka == i + 1)
				{
					cout << r[i];
				}
			}
		}

		if (temp <= bk && temp > gk)
		{
			cout << "Twoja koszulka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (k == i + 1)
				{
					cout << o[i];
				}
			}

			//losowanie spodni

			cout << "\nTwoje spodnie na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (s == i + 1)
				{
					cout << p[i];
				}
			}
			//losowanie butow


			cout << "\nTwoje buty na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (pb == i + 1)
				{
					cout << u[i];
				}
			}
			//losowanie cienkiej kurtki


			cout << "\nTwoja cienka kurtka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (kurtka == i + 1)
				{
					cout << r[i];
				}
			}
			cout << "\nTwoja bluza na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (b == i + 1)
				{
					cout << l[i];
				}
			}
		}

		if (temp <= gk && temp > bgk)
		{
			cout << "Twoja koszulka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (k == i + 1)
				{
					cout << o[i];
				}
			}

			//losowanie spodni

			cout << "\nTwoje spodnie na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (s == i + 1)
				{
					cout << p[i];
				}
			}
			//losowanie butow


			cout << "\nTwoje buty na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (pb == i + 1)
				{
					cout << u[i];
				}
			}
			//losowanie grubej kurtki


			cout << "\nTwoja gruba kurtka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (grk == i + 1)
				{
					cout << g[i];
				}
			}
		}

		if (temp <= bgk)
		{
			cout << "Twoja koszulka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (k == i + 1)
				{
					cout << o[i];
				}
			}

			//losowanie spodni

			cout << "\nTwoje spodnie na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (s == i + 1)
				{
					cout << p[i];
				}
			}
			//losowanie butow


			cout << "\nTwoje buty na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (pb == i + 1)
				{
					cout << u[i];
				}
			}
			//losowanie grubej kurtki


			cout << "\nTwoja gruba kurtka na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (grk == i + 1)
				{
					cout << g[i];
				}
			}
			cout << "\nTwoja bluza na dzis to: ";
			for (int i = 0; i < 10; i++)
			{
				if (b == i + 1)
				{
					cout << l[i];
				}
			}
		}
		getchar(); getchar();
	}
}



