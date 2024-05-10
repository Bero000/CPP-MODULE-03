#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hit_point;
        unsigned int energy_point;
        unsigned int attack_damage;    
    public:
        ClapTrap();
        ClapTrap(std::string name);

        ~ClapTrap();

        ClapTrap(const ClapTrap& copy_value);

        ClapTrap& operator= (const ClapTrap& value);
    
        void setName (const std::string setV);
        void setHitPoint(unsigned int setV);
        void setEnergyPoint(unsigned int setV);
        void setAttackDamage(unsigned int setV);
    
        unsigned int getHitPoint(void) const;
        int getEnergyPoint(void) const;
        int getAttackDamage(void) const;
        const std::string& getName(void) const;

        void attack(const std::string& target); 
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif