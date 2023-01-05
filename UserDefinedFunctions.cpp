#include <iostream>

void happyBirthday();
void happyBirthdayWithName(std::string name, int age);

int main()
{
    // function = a block of reusable code

    std::string name = "Small";
    int age = 20;

    happyBirthdayWithName(name, age);
    happyBirthday();

    return 0;
}

void happyBirthday()
{
    std::cout << "Happy Birthday to you" << std::endl;
    std::cout << "Happy Birthday to you" << std::endl;
    std::cout << "Happy Birthday dear you" << std::endl;
    std::cout << "Happy Birthday to you\n" << std::endl;
}

void happyBirthdayWithName(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday to" << name << std::endl;
    std::cout << "Happy Birthday dear" << name << std::endl;
    std::cout << "Happy Birthday to" << name << std::endl;
    std::cout << "You are " << age << " years old!" << std::endl << "\n";
}