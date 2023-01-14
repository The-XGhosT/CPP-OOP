/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:02:22 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/27 22:24:53 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "";
}
Zombie :: ~Zombie()
{
    std::cout << "the zombie has been destroyed" << std::endl;
}
void Zombie::setName(std::string nm)
{
    name = nm;
}
void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ...\n";
    
}