#include <iostream>

using namespace std;

int main() {
    int x; // declaration
    x = 5; // assignment

    cout << x;

    int x2 = 5;
    int y = 6;
    int sum = x2 + y;

    cout << x << endl;
    cout << y << endl;
    cout << sum << endl;

    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    cout << price << endl;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    cout << initial << endl;

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    string name = "Cam";
    string day = "Monday";
    string food = "pizza";
    string address = "121 Crest View St.";

    cout << name << endl;
    cout << "Hello " << name << endl;
    cout << "I am " << age << " this years old" << endl;

    return 0;
}