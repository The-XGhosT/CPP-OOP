/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:56:08 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/31 02:17:25 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nm)
{
    name = nm;
    w = NULL;
}
void    HumanB::setWeapon( Weapon &we ) {
    w = &we;
}
void HumanB::attack()
{
    std::cout<< name << "attacks with their" << w->getType() << std::endl;
}
