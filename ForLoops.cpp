#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++) 
    {
        std::cout << i << std::endl;
    }

    std::cout << "After for loop ended" << std::endl;
    std::cout << "Happy New Year!" << std::endl;

    for (int i = 0; i < 10; i += 2) 
    {
        std::cout << i << std::endl;
    }

    std::cout << "Count Down next: " << std::endl;

    for (int i = 10; i >= 0; i--) 
    {
        std::cout << i << std::endl;
    }

    return 0;
}