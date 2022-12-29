#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // Namespace = provides a solution for preventing name conflicts
    //             in larger projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    using std::cout;
    using std::string;
    using std::endl;

    int x = 0;

    cout << x << endl;

    cout << first::x << endl;
    
    cout << second::x << endl;

    string name = "Small";

    cout << name << endl;

    return 0;
}