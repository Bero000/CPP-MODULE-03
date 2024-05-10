#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called."<<std::endl;
    setName("Default");
    setHitPoint(10);
    setEnergyPoint(10);
    setAttackDamage(0);
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor called."<<std::endl;
    setName(name);
    setHitPoint(10);
    setEnergyPoint(10);
    setAttackDamage(0);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called."<<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& copy_value)
{
    *this = copy_value;
}
ClapTrap& ClapTrap::operator= (const ClapTrap& value)
{
    std::cout << "ScavTrap Operator assignment called."<<std::endl;
    if (this != &value)
    {
        this->name = value.getName();
        this->hit_point = value.getHitPoint();
        this->energy_point = value.getEnergyPoint();
        this->attack_damage = value.getAttackDamage();
    }
    return (*this);
}
void ClapTrap::setName (const std::string setV)
{
    this->name = setV;
}
void ClapTrap::setHitPoint(unsigned int setV)
{
    this->hit_point = setV;
    if ((int)setV <= 0)
        this->hit_point = 0;
}
void ClapTrap::setEnergyPoint(unsigned int setV)
{
    this->energy_point = setV;
}
void ClapTrap::setAttackDamage(unsigned int setV)
{
    this->attack_damage = setV;
}

unsigned int ClapTrap::getHitPoint(void) const
{
    return this->hit_point;
}

int ClapTrap::getEnergyPoint(void) const
{
    return this->energy_point;
}
int ClapTrap::getAttackDamage(void) const
{
    return this->attack_damage;
}
const std::string& ClapTrap::getName(void) const
{
    return this->name;
}
void ClapTrap::attack(const std::string& target)
{
    if (this->energy_point != 0 && this->hit_point != 0)
    {
        std::cout << this->name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
        energy_point--;
    }
    if (this->energy_point == 0)
        std::cout << "You can't attack anymore! Because you don't have energy!"<< std::endl;
    if (this->hit_point == 0)
        std::cout<< "You can't attack anymore! Because you don't have any hit points!"<< std::endl;
} 
void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_point > 0)
    {
        std::cout << this->name << " taken " << amount << " damage!" <<  std::endl;
        setHitPoint(getHitPoint() - amount);
    }
    else if (hit_point == 0)
        std::cout<< this->name << " can't take damage because 0 hit points!"<<std::endl;
    else
        std::cout<< this->name << " has no hit points. " << this->name << " can't taken damage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_point > 0 && energy_point > 0)
    {
        std::cout << this->name << " be repaired himself " << amount << " HP!" << std::endl;
        hit_point += amount;
        energy_point--;
    }
    else if (energy_point == 0)
        std::cout<< this->name << " can't be repaired himself because no energy points!"<< std::endl;
    else
        std::cout<< this->name << " can't be repaired." << std::endl;
}