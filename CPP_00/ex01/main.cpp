/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:39:44 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/11 02:39:48 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    PhoneBook p;
    int nm_contact = 0;
    std::string inp;
    while (1)
     {   
            
        std::getline(std::cin,inp);
           
        if(std::cin.eof() == 1)
            break ;
        if (inp.compare("ADD") == 0)
        {
            p.add_(nm_contact);
            nm_contact++;
        }
        else if (inp.compare("SEARCH") == 0)
        {
             p.search_();
             continue ;
        }
        else if (inp.compare("EXIT") == 0)
        {
            p.exit_();
            break;
        }
            
    }
}
