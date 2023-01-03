#include <iostream>
#include <ctime>

int main()
{
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num << std::endl;
    
    int num2 = (rand() % 20) + 1;

    std::cout << num2 << std::endl;

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;

    return 0;
}