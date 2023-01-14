/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:03:45 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/11 02:40:01 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <string.h>
#include <iostream>

class PhoneBook
{
private:
    Contact c[8];

public:
    std::string add_in_contact(std::string input_name,int *flag,int nm);
    void add_(int nm_contact);
    void search_();
    void exit_();
};

#endif