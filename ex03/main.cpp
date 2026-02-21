#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon weapon1 = Weapon("mega cleaver");
        HumanA bob("Bob", weapon1);
        bob.attack();
        weapon1.setType("leopard tank");
        bob.attack();
    }
    {
        Weapon weapon2 = Weapon("fart cannon");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(weapon2);
        jim.attack();
        weapon2.setType("imaginary machine gun");
        jim.attack();
    }
    return 0;
}
