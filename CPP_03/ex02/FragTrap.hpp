/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:41:17 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/13 02:50:19 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    FragTrap()
    {
        std::cout << "default constructor is called" << std::endl;
    }
    ~FragTrap()
    {
        std::cout << "default destructor is called" << std::endl;
    }
    FragTrap(std::string name):ClapTrap(name)
    {
        this->Hit_points = 100;
        this->Energy_points = 100;
        this->Attack_damage = 30;
    }
    void highFivesGuys(void)
    {
        std::cout << "The FlagTrap has a fives request on the standar output" << std::endl;
    }
};


#endif