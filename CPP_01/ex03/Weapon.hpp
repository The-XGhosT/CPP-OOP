/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:56:19 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/31 02:00:42 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
class Weapon
{
    private:
        std::string type;
    public :
        Weapon(std::string t);
        ~Weapon();
        const std::string &getType();
        void setType(std::string t);
        
};
#endif