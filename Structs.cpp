#include <iostream>

struct student 
{
    std::string name;
    double gpa;
    bool enrolled = true; 
};

int main()
{
    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Access Operator"

    student student1;
    student1.name = "Small";
    student1.gpa = 3.2;
    // student1.enrolled = true;

    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;
   
    student student2;
    student2.name = "Tim";
    student2.gpa = 2.1;
    // student2.enrolled = true;
    
    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.enrolled << std::endl;
    
    student student3;
    student3.name = "Joe";
    student3.gpa = 1.5;
    student3.enrolled = false;
    
    std::cout << student3.name << std::endl;
    std::cout << student3.gpa << std::endl;
    std::cout << student3.enrolled << std::endl;

    return 0;
}