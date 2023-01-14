/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:56:17 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/31 02:01:09 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
    setType(t);
}
Weapon::~Weapon()
{
}
const std::string &Weapon :: getType()
{
   return(type);
}
void Weapon::setType(std::string t)
{
    type = t;
}