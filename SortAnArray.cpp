#include <iostream>

void sort(int array[], int size);

int main()
{
    int array[] = {2, 10, 5, 6, 3, 1, 7, 8, 5, 9};
    int size = sizeof(array)/sizeof(array[0]);

    for (int element : array)
    {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    sort(array, size);
    
    for (int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1]) // for descending or use the less and sign operator '<'
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}