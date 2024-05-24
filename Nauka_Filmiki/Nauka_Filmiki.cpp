// Nauka_Filmiki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
#include <locale.h>
#include <typeinfo>
#include <format>
#include <numbers>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>


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
    /*
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
    // Chapter 4.6
    bool h = 1;
    bool j= 0;
    bool k = 1;
    double q = 5.0231;
    // AND
    cout << (h && j) << endl;
    cout << (h && k) << endl;
    cout << (h && j && k) << endl;
    // OR
    cout << (h || j) << endl;
    cout << (h || k) << endl;
    // NOT
    cout << !h << endl;
    // Combine
    cout << "!(h && j) || k:" << (!(h && j) || k) << endl;
    // Chapter 4.7
    cout << flush << "How are you mate?" << endl;
    cout << setw(10) << "Daniel";
    cout << setw(3)<< setfill('-') << 10;
    cout << setw(5) << setfill('-') << 5672;
    cout << endl;
    cout << setprecision(20) << showpos << q;
    // Chapter 4.8
    float p = 0.05;
    float v = 2.01;
    float bird = 32.188;
    //Limits of types of data like int or float
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<float>::min() << endl;
    // Chapter 4.8
    double weight = 7.7;
    cout << "Wegiht rounded to floor is: " << floor(weight) << endl;
    cout << "Weight rounded to ceil is: " << ceil(weight) << endl;
    cout << "Abs of weight is: " << abs(weight) << endl;
    cout << "The exponential of weight is: " << exp(weight) << endl;
    cout << "3 ^ 4 is: " << pow(3, 4) << endl;
    // Chapter 4.9
    short int trying = 50;
    short int todestroy = 60;
    char var3 = 40;
    char var4 = 50;
    trying += todestroy;
    cout << sizeof(trying) << endl;
    auto result = var3 + var4;
    cout << sizeof(result);
    */
    // Chapter 5
    /*
// Chapter 5.1
    bool red = false;
    bool green = true;
    bool yellow = false;
    bool police_stop = true;
    if (red) {
        cout << "Stop" << endl;
    }
    if (yellow) {
        cout << "Slow down" << endl;
    }
    if (green && !police_stop) {
        cout << "Go" << endl;
    }
    else {
        cout << "STOP" << endl;
    }
    int number1 = 55;
    int number2 = 60;
    bool result = number1 < number2;
    cout << boolalpha << "result: " << result << endl;
    cout << endl;
    cout << "free standing if statment" << endl;
    if (result == true) {
        cout << number1 << "is less than" << number2 << endl;
    }
    else {
        cout << number1 << "Is not less than" << number2 << endl;
    }
    // Chapter 5.2
    const int Pen = 10;
    const int Marker = 20;
    const int Eraser = 30;
    const int Rectangle = 40;
    const int Circle = 50;
    const int Ellipse = 60;
    int tool = Ellipse;
    if (tool == Pen) {
        cout << "PEN" << endl;
    }
    else if (tool == Marker) {
        cout << "Marker" << endl;
    }
    else if (tool == Eraser) {
        cout << "Eraser" << endl;
    }
    else if (tool == Rectangle) {
        cout << "Rectangle" << endl;
    }
    else if (tool == Circle) {
        cout << "Circle" << endl;
    }
    else if (tool == Ellipse) {
        cout << "Ellipse" << endl;
    }
    // chapter 5.3
    switch (tool) {
    case Pen: {
        cout << "PEN" << tool << endl;
        break;
    }

    case Marker: {
        cout << "Marker" << endl;
        break;
    }

    default: {
        cout << "NO TOOL FOR YOU :(" << endl;
        break;
    }
          
    }
     //Chapter 5.4
    int max = 0;
    int a = 35;
    int b = 20;
    max = (a > b) ? a : b;
    cout << "max :" << max << endl;
    bool fast = 0;
    int speed = (fast) ? 300 : 150;
    cout << "Your speed is: " << speed << endl;
    */
    //Chapter 6.1
/*
    for (int i = 0; i < 10; i++) {
        cout << "i = " << i << endl;
    }
    for (size_t i = 0; i < 10; ++i) {
        cout << "i = " << i << ". Double that and you get = " << 2 * i << endl;
    }
    // Chapter 6.2
    const unsigned int count = 10;
    unsigned int i = 1;
    while (i <= count) {
        cout << i << "\tI love c++" << endl;
        i++;
    }
    i = 1;
    // Chapter 6.3
    do {
        cout << "[" << i << "] : I love C++" << endl;
        i++;
    } while (i <= count);
    */
// Chapter 7
/*
    double scores[10] = { 0 };
int i;
double sum = 0;
for (i = 0; i < 10; i++) {
    if (i == 0) {
        scores[i] = scores[i] + (i * 5 + 4.5) / 4;
    }
    else {
        scores[i] = scores[i - 1] + (i * 5 + 4.5) / 4;
    }
    cout << "Score " << i << " = " << scores[i] << endl;
}
for (int element : scores) {
    sum += element;
}
cout << "Score sum = " << sum << endl;
*/
// Chapter 8
// Chapter 8.1
/*
int* p_number{};
double* p_fractional_number{};
int* p_number1 = nullptr;
int* p_fractional_number1 = nullptr;
cout << "Size of number pointer: " << sizeof(p_number) << " , size of int " << sizeof(int) << endl;
cout << "Size of fractional_number pointer: " << sizeof(p_fractional_number) << " , size of dobule: " << sizeof(double) << endl;
cout << "Size of number1 pointer: " << sizeof(p_number1) << " , size of int " << sizeof(int) << endl;
cout << "Size of fractional_number pointer: " << sizeof(p_fractional_number1) << " , size of dobule: " << sizeof(double) << endl;
int int_var = 43;
int* p_int = &int_var;
cout << "Int var : " << int_var << endl;
cout << "p_int (Adress in memory : " << p_int << endl;
int int_var1 = 65;
int_var = 126;
p_int = &int_var1;
cout << "p_int (with diffrent address) : " << p_int << endl;
int* p_int1 = nullptr;
double double_var = 33;
// p_int1 = &double_var; // Error *int = &int *double = &double
*/
// Chapter 8.2
/*
char* p_char_var = nullptr;
char char_var = 'A';
p_char_var = &char_var;
cout << "The vaule stored in p_char_var is: " << p_char_var << endl;
char char_var1 = 'C';
p_char_var = &char_var1;
cout << "The value stored in p_char_var is : " << p_char_var << endl;
char message[] = "Hello there General Kenobi";
p_char_var = &message[0];
cout << "The value stored in p_char_var is : " << p_char_var << endl;
*/
//Chapter 8.3
/*
const char* message = "Hello World!";
cout << "message = " << message << endl;
cout << "*message = " << *message << endl;
char message1[] = "Hello World";
message1[0] = 'B';
cout << "message1 = " << message1 << endl;
int* p_number4 = nullptr; 
p_number4 = new int;
*p_number4 = 77;
cout << "Dynamically allocating memory *p_number4 = " << *p_number4 << endl;
delete p_number4;
p_number4 = nullptr;
*/
//Chapter 8.4
cout << "Solution 1 : "<< endl;
int* p_number5 = 0;
int* p_number6 = new int{ 56 };
if (p_number6 != nullptr) {
    cout << "*pnumber6 : " << *p_number6 << endl;
}
cout << "Solution 2 : " << endl;
int* p_number7 = new int{ 82 };
cout << "p_number7 = " << *p_number7 << " - " << *p_number7 << endl;
delete p_number7;
p_number7 = nullptr; //reseting the pointer
if (p_number7 != nullptr) {
    cout << "*p_number7 = :" << p_number7 << endl;
}
int* p_number8 = new int{ 382 };
int* p_number9 = p_number8;
cout << "p_number8 - " << p_number8 << " = " << *p_number8 << endl;
if (!(p_number8 == nullptr)) {
    cout << "p_number 9 - " << p_number9 << " - " << *p_number9 << endl;
}
delete p_number8;
p_number8 = nullptr;
if (!(p_number8 == nullptr)) {
    cout << "p_number9 = " << p_number9 << " - " << *p_number9 << endl;
}
else {
    cerr << "WARNING : Trying to use an invalid pointer" << endl;
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
