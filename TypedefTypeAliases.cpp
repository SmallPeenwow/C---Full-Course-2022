#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairList_t;
typedef std::string text_t;
typedef int number_t;

using text2_t = std::string;
using number2_t = int;

int main() {
    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readability and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)
    
    using std::endl;

    pairList_t pairList;

    text_t firstName = "Small";

    std::cout << firstName << endl;

    number_t age = 12;

    std::cout << age << endl;

    text2_t surname = "P";
    number2_t day = 25;

    std::cout << surname << " is " << day << " away from retirement" << endl;

    return 0;
}