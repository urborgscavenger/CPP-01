#include <iostream>
#include "Harl.hpp"

Harl::Harl() {
    complainMap["DEBUG"] = &Harl::debug;
    complainMap["INFO"] = &Harl::info;
    complainMap["WARNING"] = &Harl::warning;
    complainMap["ERROR"] = &Harl::error;
}

void Harl::debug(void) {
    WriteLine("[ DEBUG ]");
    WriteLine("I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!");
}

void Harl::info(void) {
    WriteLine("[ INFO ]");
    WriteLine("I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!");
}

void Harl::warning(void) {
    WriteLine("[ WARNING ]");
    WriteLine("I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.");
}

void Harl::error(void) {
    WriteLine("[ ERROR ]");
    WriteLine("This is unacceptable! I want to speak to the manager now.");
}

void Harl::complain(string level) {
    std::map<string, ComplainFunc>::iterator it = complainMap.find(level);
    if (it != complainMap.end()) {
        (this->*(it->second))();
    }
}