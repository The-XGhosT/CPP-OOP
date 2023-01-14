/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:51:49 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/13 02:39:30 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap(std::string name):ClapTrap(name)
    {
        this->Hit_points = 100;
        this->Energy_points = 50;
        this->Attack_damage = 20;
    }
    void attack(const std::string& target)
    {
        if(this->Hit_points > 0)
            this->Hit_points --;
        if(this->Energy_points > 0)
            this->Energy_points-- ;
        std::cout << "ClapTrap" << this->name << " attacks" << target << "causing" << this->Attack_damage << " points of damage!" << std::endl; 

    }
    void guardGate()
    {
        std::cout << " ScavTrap is now in Gate Keeper mode" << std::endl;
    }
};
#endif
