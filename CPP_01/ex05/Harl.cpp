/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:23:31 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/13 00:20:56 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
Class a (b);
Harl::Harl()
{
    
}
Harl::~Harl()
{
    
}
void Harl::debug( void )
{
   std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"  << std::endl;
}
void Harl::info( void )
{
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout <<"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout <<"This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    ptr p[] = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
    int i = 0;
    while(i < 4)
    {
        if(levels[i] == level)
        {
            (this->*p[i])();
        }
        i++;
    }
}