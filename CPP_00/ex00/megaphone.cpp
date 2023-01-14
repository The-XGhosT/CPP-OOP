/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:46:43 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/11 03:49:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if(ac > 1)
	{
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				// char c;
				// c = toupper(av[i][j]);
				std::cout << (char )toupper(av[i][j]);;
				j++;

			}
            std::cout << " ";
			i++;
		}
	}
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return(0);
}