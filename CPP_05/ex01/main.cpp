/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 02:23:12 by ilyas             #+#    #+#             */
/*   Updated: 2023/01/12 07:00:19 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Ilyas("ilyas",150);
       // Ily.incrementGrade();
        //Ily.decrementGrade();
        std::cout << Ilyas << std::endl ;
 
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}