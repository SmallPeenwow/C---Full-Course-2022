#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string name2;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) 
    {
        std::cout << "Your name can't be over 12 characters" << std::endl;
    }
    else 
    {
        std::cout << "Welcome " << name << std::endl;
    }
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name2);

    if (name2.empty())
    {
        std::cout << "You didn't enter your name" << std::endl;
    }
    else
    {
        std::cout << "Hello " << name2 << std::endl;
    }

    name.clear();

    std::cout << "Hello again " << name << std::endl;

    name2.append("@gmail.com");

    std::cout << "Your username is now " << name2 << std::endl;

    std::cout << name2.at(1) << std::endl;

    name2.insert(0, "@");

    std::cout << name2 << std::endl;

    std::cout << "Find whitespaces in: " << name2.find(' ') << std::endl;

    name2.erase(0, 3);

    std::cout << "Erased string: " << name2 << std::endl;

    return 0;
}