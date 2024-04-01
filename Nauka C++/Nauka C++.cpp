// Nauka C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	string x;
	int numer_operacji;
	int pierwsza_cyfra;
	int druga_liczba = 0;
	bool koniec;
label:
	cout << "Witaj w kalkulatorze wybierz proszê jak¹ operacjê chcesz wykonaæ:\n";
	cout << "+ - dodawanie\t - - odejmowanie \t / - dzielenie\t ^ - potêga\t ^^ - wiêksza potêga\t ! - silnia\t 0 - koniec\n";//+-43, --45, /-47, 94 - potêga,  - wiêksza potêga, 33 - silnia
	cin >> x;
	if (x == "+") {
		numer_operacji = 1;
	}
	else if (x == "-") {
		numer_operacji = 2;
	}
	else if (x == "/") {
		numer_operacji = 3;
	}
	else if (x == "^") {
		numer_operacji = 4;
	}
	else if (x == "^^") {
		numer_operacji = 5;
	}
	else if (x == "!") {
		numer_operacji = 6;
	}
	else if (x == "0") {
		numer_operacji = 0;
	}
	else {
		numer_operacji = 0;
	}
	switch (numer_operacji) {
	case 0:
		break;
	case 1:
		cout << "Podaj pierwsz¹ liczbê jak¹ chcesz dodaæ:";
		cin >> pierwsza_cyfra;
		cout << "Podaj drug¹ liczê jak¹ chcesz dodaæ:";
		cin >> druga_liczba;
		cout << pierwsza_cyfra + druga_liczba;
		cout << "\n";
		goto label;
		break;
	case 2:
		cout << "Podaj pierwsz¹ liczbê jak¹ chcesz od której bêdziemy odejmowaæ:";
		cin >> pierwsza_cyfra;
		cout << "Podaj drug¹ liczê jak¹ odejmiemy:";
		cin >> druga_liczba;
		cout << pierwsza_cyfra - druga_liczba;
		cout << "\n";
		goto label;
		break;
	case 3:
		cout << "Podaj pierwsz¹ liczbê jak¹ bêdziesz dzieli³:";
		cin >> pierwsza_cyfra;
		cout << "Podaj drug¹ liczê przez któr¹ podzielimy pierwsz¹";
		cin >> druga_liczba;
		cout << pierwsza_cyfra / druga_liczba;
		cout << "\n";
		goto label;
		break;
	case 4:
		cout << "Podaj liczbê z która bêdzie potêgowana do potêgi 2:";
		cin >> pierwsza_cyfra;
		pierwsza_cyfra = pow(pierwsza_cyfra, 2);
		cout << pierwsza_cyfra;
		cout << "\n";
		goto label;
		break;
	case 5:
		cout << "Podaj liczbê któr¹ bêdziemy potgêgowaæ:";
		cin >> pierwsza_cyfra;
		cout << "Podaj potêge:";
		cin >> druga_liczba;
		pierwsza_cyfra = pow(pierwsza_cyfra, druga_liczba);
		cout << pierwsza_cyfra;
		cout << "\n";
		goto label;
		break;
	case 6:
		cout << "Podaj cyfrê z której bêdzie silnia:";
		cin >> pierwsza_cyfra;
		for (int i = pierwsza_cyfra; i >= 0; i = i - 1) {
			druga_liczba += i;
		}
		cout << druga_liczba;
		cout << "\n";
		goto label;
		break;
	default:
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
