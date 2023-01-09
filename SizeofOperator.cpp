#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "Small";
    double gpa = 2.5;
    char grade = 'F';
    bool students = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};


    std::cout << sizeof(gpa) << " bytes" << std::endl;
    std::cout << sizeof(double) << " bytes" << std::endl;
    std::cout << sizeof(name) << " bytes" << std::endl;
    std::cout << sizeof(students) << " bytes" << std::endl;
    std::cout << sizeof(grades) << " bytes" << std::endl;
    std::cout << sizeof(grades)/sizeof(char) << " elements" << std::endl;
    std::cout << sizeof(students)/sizeof(std::string) << " elements" << std::endl;

    return 0;
}