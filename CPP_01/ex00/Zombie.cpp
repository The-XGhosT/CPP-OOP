/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:09:56 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/27 22:25:14 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie :: Zombie(std::string nm)
{
    name = nm;
}
Zombie :: ~Zombie()
{
    
    std::cout << "the zombie" << name << "has been destroyed" << std::endl;
}
void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
    
}