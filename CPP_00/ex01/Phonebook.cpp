/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:01:43 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/11 02:27:40 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string PhoneBook::add_in_contact(std::string input_name, int *flag,int nm)
{
    std::string data;
    std::cout << input_name;
    std::getline(std::cin, data);
    if (!data.empty())
        *flag = 1;
    if(nm == 3)
    {
        int checker = 0;
        while(checker < (int)data.length())
        {
            if(isdigit(data[checker])|| data[checker] == ' ')
                checker++;
            else
            {
                *flag = 0;
                break;
            }
        }

    }
    return (data);
}

void PhoneBook::add_(int nm_contact)
{
    std::string data[5];
    int i = 0;
    int flag;
    while (i < 5)
    {
        flag = 0;
        if (i == 0)
            data[0] = add_in_contact("enter your  first name   :", &flag, i);
        else if (i == 1)
            data[1] = add_in_contact("enter you   last name    :", &flag, i);
        else if (i == 2)
            data[2] = add_in_contact("enter your  nick name    :", &flag, i);
        else if (i == 3)
            data[3] = add_in_contact("enter your  phone number :", &flag, i);
        else if (i == 4)
            data[4] = add_in_contact("enter your darkest secret: ", &flag, i);
        if (flag == 0)
            std::cout << "Your Input Is Invalid\n";
        else
            i++;
    }
    c[(nm_contact % 8)].set_data((nm_contact % 8), data[0], data[1], data[2], data[3], data[4]);
}
void PhoneBook::search_()
{
    std::string index_str;
    int index_int;
    int status = 0;
    std::cout << "|----------------/phonebook/----------------|\n";
    for (int i = 0; i < 8; i++)
    {
        status = c[i].display_();
        if( status == 0 && i == 0)
        {
            std::cout << "please add at least one contact" << std::endl;
            return;
        }
    }
    std::cout << "enter the number of the contact : ";
    while (std::cin >> index_str && !std::cin.eof())
    {
        int j = 0;
        while(index_str[j])
        {
            if(isdigit(index_str[j]))
                j++;
            else
            {
                j = -1;
                break;
            }

        }
        if( j != -1)
            index_int = stoi(index_str);
        if (index_int >= 0 && index_int < 8 && c[index_int].display_contact() == 1)
                break;
        else
            std::cout << "enter a valid index : ";
    }
}
void PhoneBook::exit_()
{
    exit(0);
}
