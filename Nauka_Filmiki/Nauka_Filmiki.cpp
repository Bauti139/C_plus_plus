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


/* chapter 2
int addNumber(int pierwsza_cyfra, int druga_cyfra) {
    int suma = pierwsza_cyfra + druga_cyfra;
    cout << suma << endl;
    return suma;
}
*/
int main()
{
    setlocale(LC_CTYPE, "Polish");
    //Chapter 2
   /* cout << "Podaj mi swoje imiê" << endl;
    string name;
    getline(cin, name);
     
    for (int i = 0; i < 10; i++) {
        cout << name << endl;
    }
    addNumber(10, 5);
    return 0;
    */
    // Chapter 3
    /*
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
    */
    // Chapter 4
    // Chapter 4.1
    // adding
    int number1 = 2;
    int number2 = 7;
    int suma = number1 + number2;
    cout << suma << endl;
    // substracution
    suma = suma - number1;
    cout << suma << endl;
    //Multiplication
    suma = suma * number2;
    cout << suma << endl;
    // Division
    suma = suma / number1;
    cout << suma << endl;
    // Modulus
    suma = suma % number2;
    cout << suma << endl;
    //Chapter 4.2
    int a, b, c, d, e, f, g;
    a = 5;
    d = 5;
    f = 5;
    b = 10;
    c = 3;
    e = 2;
    g = 20;
    suma = a + b * c - d / e - f + g;
    cout << suma << endl;
    // Chapter 4.3
    int value = 5;
    value++;
    cout << value << endl;
    //First writes than adds one
    cout << "The value is:" << value++ << endl;
    for (int i = 0; i < 4; i++) {
        value--;
    }
    cout << value << endl;
    //First substract than writes
    cout << "Now the value is:" << --value << endl;
    // Chapter 4.4
    value += 5;
    cout << value << endl;
    value -= 6;
    cout << value << endl;
    value *= 20;
    cout << value << endl;
    value /= 4;
    cout << value << endl;
    value %= 2;
    cout << value << endl;
    // Chapter 4.5
    int x = 45;
    int y = 60;
    cout << "x < y\t" << (x < y) << endl;
    cout << "x <= y\t" << (x <= y) << endl;
    cout << "x > y\t" << (x > y) << endl;
    cout << "x >= y\t" << (x >= y) << endl;
    cout << "x == y\t" << (x == y) << endl;
    cout << "x != y\t" << (x != y) << endl;
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
