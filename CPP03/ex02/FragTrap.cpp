#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<< "| FragTrap Default constructor called. |"<<std::endl;
    setName("| FragTrap Default");
    setHitPoint(100);
    setEnergyPoint(100);
    setAttackDamage(30);
}
FragTrap::FragTrap(std::string name)
{
    std::cout<< "| FragTrap constructor called. |"<<std::endl;
    setName(name);
    setHitPoint(100);
    setEnergyPoint(100);
    setAttackDamage(30);
}
FragTrap::~FragTrap()
{
    std::cout<< "| FragTrap Destructor called. |"<<std::endl;
}
FragTrap::FragTrap(const FragTrap& copy_value)
{
    *this = copy_value;
}
FragTrap& FragTrap::operator= (const FragTrap& value)
{
    std::cout<< "| FragTrap Assignment operator called. |"<<std::endl;
    if (this != &value)
    {
        this->name = value.getName();
        this->hit_point = value.getHitPoint();
        this->energy_point = value.getEnergyPoint();
        this->attack_damage = value.getAttackDamage();
    }
    return *this;
}
void FragTrap::highFivesGuys(void)
{
    std::cout<< "------- Give me High Five!!! -------"<<std::endl;
}