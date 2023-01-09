#include <iostream>
#include <string>

int searchArray(int array[], int size, int element);
int searchArrayFood(std::string array[], int size, std::string element);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter number element to search for: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else 
    {
        std::cout << myNum << " is not in the array" << std::endl;
    }

    std::cin.clear(); // Need this to do another input from user
    fflush(stdin); // Add this

    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    
    int size2 = sizeof(foods)/sizeof(foods[0]);
    std::string myFood;
    int index2;
   
    std::cout << "Enter food element to search for: ";
    std::getline(std::cin, myFood);

    index2 = searchArrayFood(foods, size2, myFood);
    
    if (index2 != -1)
    {
        std::cout << myFood << " is at index " << index2 << std::endl;
    }
    else 
    {
        std::cout << myFood << " is not in the array" << std::endl;
    }

    return 0;
}

int searchArray(int array[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int searchArrayFood(std::string array[], int size, std::string element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }

    return -1;
}