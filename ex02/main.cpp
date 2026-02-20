#include <iostream>
#include <string>

#define string std::string
#define WriteLine(x) std::cout << x << std::endl

int main() {
    string brain = "HI THIS IS BRAIN";
    string* stringPTR = &brain;
    string& stringREF = brain;

    // memory addresses
    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    // values
    WriteLine(brain);
    WriteLine(*stringPTR);
    WriteLine(stringREF);

    return 0;
}
