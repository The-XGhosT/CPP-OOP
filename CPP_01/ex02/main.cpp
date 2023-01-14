/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:27:31 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/27 22:29:00 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string A = "HI THIS IS BRAIN";
    std::string *stringPTR = &A;
    std::string &stringREF = A;

    std::cout<< &A << std::endl;
    std::cout<< &stringREF << std::endl;
    std::cout<< &stringPTR << std::endl;

    std::cout<< A << std::endl;
    std::cout<< stringREF << std::endl;
    std::cout<< *stringPTR << std::endl;

}