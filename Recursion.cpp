#include <iostream>

void walk(int steps);
void walk2(int steps);

int factorial(int num);
int factorial2(int num);

int main()
{
    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantage = uses more memory
    //                slower

    walk(100);
    walk2(100);

    std::cout << factorial(10);
    std::cout << factorial2(10);

    return 0;
}

void walk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take a step!\n";
    }
}

void walk2(int steps)
{
    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walk2(steps - 1);
    }
}

int factorial(int num)
{
    int result = 1;

    for (int i = 0; i <= num; i++)
    {
        result = result * i;
    }

    return result;
}

int factorial2(int num)
{
    if (num > 1)
    {
        return num * factorial2(num - 1);
    }
    else
    {
        return 1;
    }
}