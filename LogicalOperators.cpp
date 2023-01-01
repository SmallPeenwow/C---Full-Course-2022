#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand

    int temp;
    int temp2;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!" << std::endl;
    }
    else 
    {
        std::cout << "The temperature is bad!" << std::endl;
    }
    
    std::cout << "Enter the temperature: ";
    std::cin >> temp2;

    if (temp2 <= 0 || temp2 >= 30)
    {
        std::cout << "The temperature is bad!" << std::endl;
    }
    else 
    {
        std::cout << "The temperature is good!" << std::endl;
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside!";
    }
    else 
    {
        std::cout << "It is sunny outside!";
    }

    return 0;
}