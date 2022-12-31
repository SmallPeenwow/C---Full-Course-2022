#include <iostream>
#include <string>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
   
    std::string name2;
    int age2;

    std::cout << "What's your age?: ";
    std::cin >> age2;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name2);


    std::cout << "Hello " << name2 << std::endl;
    std::cout << "You are " << age2 << " years old.";

    return 0;
}