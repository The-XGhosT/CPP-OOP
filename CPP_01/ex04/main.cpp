/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 02:18:30 by iqabbal           #+#    #+#             */
/*   Updated: 2022/10/31 09:08:18 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
    if(ac == 4)
    {
        File f(av[1]);
        f.replace(av[2],av[3]);
    }
    else
        std::cout << "Error in nm of arg" << std::endl;
    
}