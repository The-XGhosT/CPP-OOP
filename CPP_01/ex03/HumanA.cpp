/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:56:04 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/31 02:14:42 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm,Weapon &we):w(we)
{
    name = nm;
    
}
void HumanA::attack()
{
    std::cout<< name << "attacks with their" << w.getType() << std::endl;
}