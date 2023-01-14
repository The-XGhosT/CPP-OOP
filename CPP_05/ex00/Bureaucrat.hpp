/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 02:23:08 by ilyas             #+#    #+#             */
/*   Updated: 2023/01/12 06:52:57 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
    private:
        std::string name;
        int grade;
    public:

    
    //constructors
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string _name, int _grade);
        //copy assignement operator :
            //please creat a copy assignement operator
        //copy constructor :
            //please creat a copy constructor



    //class exceptios
    class GradeTooHighException : public std::exception
    {
	    const char* what() const throw();
	};

    class GradeTooLowException : public	std::exception
    {
	    const char* what() const throw();
	};



    //others method
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

};

std::ostream& operator <<(std::ostream &out, Bureaucrat &bur);
#endif