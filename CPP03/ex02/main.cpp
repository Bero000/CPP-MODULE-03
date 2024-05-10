#include "FragTrap.hpp"

int main()
{
    FragTrap a("Mali");
    FragTrap b("Berozin");
    FragTrap c(a);

    std::cout<< b.getName() << " has " << b.getHitPoint() << " HP!" <<std::endl; 
    a.attack("Berozin");
    c.attack("Berozin");
    b.takeDamage(b.getAttackDamage());
    std::cout<< b.getName() << " has " << b.getHitPoint() << " HP!" <<std::endl; 
    b.takeDamage(b.getAttackDamage());
    std::cout<< b.getName() << " has " << b.getHitPoint() << " HP!" <<std::endl; 
    b.beRepaired(25);
    std::cout<< "---|---  " << b.getName() << " has " << b.getHitPoint() << " HP!" << "  ---|---"<<std::endl; 
    b.highFivesGuys();
}