#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<< "ScavTrap Default constructor called."<<std::endl;
    setName("Scavtrap Default");
    setAttackDamage(20);
    setHitPoint(100);
    setEnergyPoint(50);
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout<< "ScavTrap Contructor called."<<std::endl;
    setName(name);
    setAttackDamage(20);
    setHitPoint(100);
    setEnergyPoint(50);
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called."<<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& copy_value)
{
    *this = copy_value;
}
ScavTrap& ScavTrap::operator= (const ScavTrap& value)
{
    std::cout<< "ScavTrap Assignment operator called."<<std::endl;
    if (this != &value)
    {
        this->name = value.getName();
        this->hit_point = value.getHitPoint();
        this->attack_damage = value.getAttackDamage();
        this->energy_point = value.getEnergyPoint();
    }
    return *this;
}
void ScavTrap::guardGate()
{
    std::cout << "Guard Gate is here!" <<std::endl;
}