#include <iostream>
#include "Harl.hpp"

int main() {
    Harl harl;

    WriteLine("Testing Harl's complaints:");
    WriteLine("");

    harl.complain("DEBUG");
    WriteLine("");
    harl.complain("INFO");
    WriteLine("");
    harl.complain("WARNING");
    WriteLine("");
    harl.complain("ERROR");
    WriteLine("");

    WriteLine("Testing unknown level:");
    harl.complain("UNKNOWN");
    WriteLine("");

    return 0;
}