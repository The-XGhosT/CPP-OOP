/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 03:12:44 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/13 04:14:38 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

std::cout << "----------- Animal ------------" << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete  meta;
delete  j;
delete  i;

std::cout << "--------- Wrong animal ---------" << std::endl;
//Wrong
const WrongAnimal *Wrong_ = new WrongAnimal();
const WrongAnimal *WrongCat_ = new WrongCat();
std::cout << WrongCat_->getType() << " " << std::endl;
WrongCat_->makeSound(); //will output the cat sound!
Wrong_->makeSound();

delete Wrong_;
delete WrongCat_;
return 0;
}