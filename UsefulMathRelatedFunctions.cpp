#include <iostream>
#include <cmath>

int main() 
{   
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);

    std::cout << z << std::endl;

    z = std::min(x, y);

    std::cout << z << std::endl;

    z = pow(2, 3);

    std::cout << z << std::endl;

    z = sqrt(9);

    std::cout << z << std::endl;

    z = abs(-3);

    std::cout << z << std::endl;

    double x2 = 3.14;

    z = round(x2);

    std::cout << z << std::endl;

    z = ceil(x2);

    std::cout << z << std::endl;

    double x3 = 3.99;

    z = floor(x3);
    
    std::cout << z << std::endl;

    return 0;
}