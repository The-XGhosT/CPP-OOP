/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:56:11 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/31 02:17:31 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *w;
        std::string name;
    
    public:
        HumanB(std::string nm);
        void setWeapon( Weapon &we );
        void attack();
};

#endif