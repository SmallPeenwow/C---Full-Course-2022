#include <iostream>

int myNum = 3;

void printNum(int myNum);
void printNum();
void displayNum();

int main()
{
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions
    
    int myNum = 1;

    printNum(myNum);
    printNum();
    displayNum();

    std::cout << ::myNum << std::endl;

    return 0;
}

void printNum(int myNum) { 
    std::cout << myNum << std::endl;
}

void printNum() { 
    int myNum = 2;
    std::cout << myNum << std::endl;
}

void displayNum() {
    std::cout << myNum << std::endl;
}