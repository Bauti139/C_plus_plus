// Nauka_Filmiki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
#include <locale.h>
#include <typeinfo>
#include <format>
#include <numbers>
#include <iomanip>


/* chapter 3
int addNumber(int pierwsza_cyfra, int druga_cyfra) {
    int suma = pierwsza_cyfra + druga_cyfra;
    cout << suma << endl;
    return suma;
}
*/
int main()
{
    setlocale(LC_CTYPE, "Polish");
    //Chapter 3
   /* cout << "Podaj mi swoje imiê" << endl;
    string name;
    getline(cin, name);
     
    for (int i = 0; i < 10; i++) {
        cout << name << endl;
    }
    addNumber(10, 5);
    return 0;
    */
    // Chapter 4
    auto number1 = 9999999999999999999; //decimal
    long int longnumber = 30;
    long long int longernumber = 30;
    int number2 = 017; // Octal
    int number3 = 0x0f; //hexadecimal
    int number4 = 0b00001111; // binary
    int value = 10;
    int nvalue = -300;
    cout << "First number is:" << number1 << endl;
    cout << "Second number is:" << number2 << endl;
    cout << "Third number is:" << number3 << endl;
    cout << "Fourth number is:" << number4 << endl;
    cout << "Size of number 1:" << sizeof(number1) << endl;
    cout << "type of number 1:" << typeid(number1).name() << endl;
    cout << value << endl;
    cout << nvalue << endl;
    cout << typeid(nvalue).name() << endl;
    cout << sizeof(longnumber) << endl;
    cout << sizeof(longernumber) << endl;
    long double test = 1.1 * 1.1;
    cout << std::setprecision(20);
    cout << test << endl;
    char dokalkulatora = 0;
    cout << "Podaj jakiœ symbol:" << endl;
    cin >> dokalkulatora;
    int operacja = dokalkulatora;
    cout << operacja << endl;
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
