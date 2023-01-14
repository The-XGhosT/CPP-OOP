/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyas <ilyas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 02:23:04 by ilyas             #+#    #+#             */
/*   Updated: 2023/01/12 06:59:36 by ilyas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



//constructors
Bureaucrat:: Bureaucrat()
{
    std::cout << "\"Bureaucrat\" Defualt constructor called" << std::endl;
}
Bureaucrat:: ~Bureaucrat()
{
    std::cout << "\"Bureaucrat\" Defualt destructor called" << std::endl;
}




//constructor init varaibles
Bureaucrat:: Bureaucrat(std::string _name, int _grade)
{
    if( _name == "")
        throw std::invalid_argument("Empty Bureaucrat !!");
    if(_grade < 1)
        throw GradeTooHighException();
    if( _grade > 150)
        throw GradeTooLowException();
    this->name = _name;
    this->grade = _grade;
}



//getters
std:: string Bureaucrat:: getName() const {
    return this->name;
}
int  Bureaucrat:: getGrade()const {
    return this->grade;
}



//increment and decremaent
void	Bureaucrat::incrementGrade(){
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade--;
}
void	Bureaucrat::decrementGrade(){
	if (this->grade >= 150)
		throw GradeTooLowException();
	this->grade++;
}



//exceptions class
const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Exception: Bureaucrat grade is too high.");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Exception: Bureaucrat grade is too low.");
}


//operator <<
std::ostream&  operator <<(std::ostream &out, Bureaucrat  &bur){
	out << "\""<< bur.getName() << "\""<< " Bureaucrat grade  : "<<  bur.getGrade();
    return out;
}