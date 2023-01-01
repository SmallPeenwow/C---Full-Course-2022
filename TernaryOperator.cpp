#include <iostream>

int main()
{
    // Ternary Operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!" << std::endl : std::cout << "You fail!" << std::endl;

    int number = 9;

    number % 2 ? std::cout << "ODD" << std::endl : std::cout << "EVEN" << std::endl;

    bool hungry = true;

    hungry ? std::cout << "You are hungry" << std::endl : std::cout << "You are full" << std::endl;
    std::cout << (hungry ? "You are hungry" : "You are full") << std::endl;

    return 0;
}