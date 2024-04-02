// Nauka_Filmiki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
#include <locale.h>

int addNumber(int pierwsza_cyfra, int druga_cyfra) {
    int suma = pierwsza_cyfra + druga_cyfra;
    cout << suma << endl;
    return suma;
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Podaj mi swoje imiê" << endl;
    string name;
    getline(cin, name);
     
    for (int i = 0; i < 10; i++) {
        cout << name << endl;
    }
    addNumber(10, 5);
    return 0;
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
