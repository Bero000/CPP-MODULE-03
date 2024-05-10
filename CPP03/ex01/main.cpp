#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Mali");
    ScavTrap b("Berozin");
    ScavTrap c(a);

    a.attack("Berozin");
    c.attack("Berozin");
    b.takeDamage(b.getAttackDamage());
    b.beRepaired(30);
    b.guardGate();
}