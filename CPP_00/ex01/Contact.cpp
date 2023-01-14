/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:58:10 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/11 01:35:35 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_data(int ind, std::string f_name, std::string l_name, std::string ni_name, std::string p_n, std::string d_s)
{
    index = ind;
    first_name = f_name;
    last_name = l_name;
    nickname = ni_name;
    phone_number = p_n;
    darkest_secre = d_s;
}

int Contact::check_len(std::string str)
{
    if (str.length() >= 10)
    {
        std::cout << str.substr(0, 9) << ".";
        return (1);
    }
    return (0);
}
int Contact::display_()
{
    if (first_name.empty() || last_name.empty() || nickname.empty())
        return(0);
    std::cout << "|";
    std::cout << std::setw(10) << index;
    std::cout << "|";
    if (check_len(first_name) == 0)
        std::cout << std::setw((10)) << first_name;
    std::cout << "|";
    if (check_len(last_name) == 0)
        std::cout << std::setw((10)) << last_name;
    std::cout << "|";
    if (check_len(nickname) == 0)
        std::cout << std::setw((10)) << nickname;
    std::cout << "|";
    std::cout << "\n";
    return(1);
}

int Contact::display_contact()
{
    if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secre.empty())
        return (0);
    std::cout << std::endl;
    std::cout << "first name     :" << first_name << std::endl;
    std::cout << "last           :" << last_name << std::endl;
    std::cout << "nick name      :" << nickname << std::endl;
    std::cout << "phone number   :" << phone_number << std::endl;
    std::cout << "darkest secret :" << darkest_secre << std::endl;
    std::cout << std::endl;
    return (1);
}