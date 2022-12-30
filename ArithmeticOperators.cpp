#include <iostream>

int main() {
    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)
    // parenthesis
    // multiplication & division
    // addition & subtraction

    int students = 20;

    //students = students + 1;
    students += 2;

    std::cout << students << std::endl;

    //students = students - 2;
    students -= 1;

    std::cout << students << std::endl;

    //students = students * 2;
    students *= 2;

    std::cout << students << std::endl;
 
    //students = students / 2;
    students /= 2;

    std::cout << students << std::endl;

    //int remainder = students % 2;
    int remainder = students % 3;

    std::cout << remainder << std::endl;

    double stud = 20;

    stud /= 3;
    
    std::cout << stud << std::endl;

    int teacher = 20;
    teacher++;

    std::cout << teacher << std::endl;
    
    teacher--;

    std::cout << teacher << std::endl;

    int student = 6 - 5 + 4 * 3 / 2;

    std::cout << student << std::endl;
    
    int student2 = 6 - (5 + 4) * 3 / 2;

    std::cout << student2 << std::endl;

    return 0;
}