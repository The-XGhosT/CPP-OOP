/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:13:16 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/13 20:39:22 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj("fofo");
    obj.attack("a");
    obj.attack("b");
    obj.attack("c");
    obj.attack("d");
    obj.attack("e");
    obj.attack("f");
    obj.attack("g");
    obj.attack("h");
    //obj.attack("i");
    //obj.attack("j");
   // obj.attack("k");
    obj.beRepaired(6);
    obj.takeDamage(9);
    obj.beRepaired(6);
    
}