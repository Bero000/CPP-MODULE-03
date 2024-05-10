#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Bihter");
    ClapTrap b("Behlül");

    a.setAttackDamage(3);
    a.attack("Behlül");
    b.takeDamage(9);
    b.beRepaired(5);
}