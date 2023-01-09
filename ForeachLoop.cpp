#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    std::string students[] = {"Small", "Tim", "Red", "Joe"};

    for(std::string student : students) {
        std::cout << student << std::endl;
    }

    int grades[] = {65, 73, 54, 93};

    for(int grade : grades) {
        std::cout << grade << std::endl;
    }

    return 0;
}