/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 08:26:36 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/13 20:50:36 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::  ClapTrap()
{
    std::cout << "default constructor called" << std::endl;
}

ClapTrap:: ClapTrap(std::string name)
{
    this->name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    std::cout << "The Clap Trap has been defined" << std::endl;
}

void ClapTrap:: attack(const std::string& target)
{
    if(this->Energy_points > 0)
        this->Energy_points--;
    else
    {
        std::cout << "energy is out " << std::endl;
    }
    if(this->Hit_points > 0)
        this->Hit_points--;
    else
    {
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!" << std::endl; 
 }
 
 void ClapTrap:: takeDamage(unsigned int amount)
 {
    if(amount >= this->Hit_points)
    {
        std::cout << "ClapTrap " << this->name << " is died " << std::endl;
        this->Hit_points = 0;
        return;
    } 
    else
    {
    this->Hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " Recieved " << amount << " Point Damage" << std::endl;
    }
 } 
 
 void ClapTrap::beRepaired(unsigned int amount)
 {
    if(this->Energy_points > 0)
        this->Energy_points--;
    else{
        std::cout << "energy out " << std::endl;
        return;
    }
    this->Hit_points+=amount;
    std::cout << "ClapTrap " << this->name << " Healed with " << amount << " Hit points " << std::endl;
 }
 
ClapTrap:: ~ClapTrap()
{
    std::cout << "default destructor called" << std::endl;
}