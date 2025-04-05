/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:31:19 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/05 20:39:45 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

// C & D
Base::~Base(void) {}

// method
Base* Base::generate(void) {
    int choice = rand() % 3;
    std::cout << choice << std::endl;
    switch (choice) {
        case 0:
            std::cout << GREEN << "A Class generated !" << RESET << std::endl;
            return (new A);
        case 1:
            std::cout << CYAN << "B Class generated !" << RESET << std::endl;
            return (new B);
        case 2:
            std::cout << YELLOW << "C Class generated !" << RESET << std::endl;
            return (new C);
    }
    return NULL;
}

void Base::identify(Base* p) {
    A* a;
    B* b;
    C* c;

    a = dynamic_cast<A* >(p);
    b = dynamic_cast<B* >(p);
    c = dynamic_cast<C* >(p);
    if (a != NULL) {
        std::cout << GREEN << "A class identified." << RESET << std::endl;
        return;
    }
    if (b != NULL) {
        std::cout << CYAN << "B class identified." << RESET << std::endl;
        return;
    }
    if (c != NULL) {
        std::cout << YELLOW << "C class identified." << RESET << std::endl;
        return;
    }
    std::cout << RED << "Can't identify the type." << RESET << std::endl;
}

void Base::identify(Base& p) {
    Base trash;

    try
    {
        trash = dynamic_cast<A &>(p);
        std::cout << GREEN << "A class identified." << RESET << std::endl;
        return;
    }
    catch (std::exception& e) {}

    try
    {
        trash = dynamic_cast<B &>(p);
        std::cout << CYAN << "B class identified." << RESET << std::endl;
        return;
    }
    catch (std::exception& e) {}

    try
    {
        trash = dynamic_cast<C &>(p);
        std::cout << YELLOW << "C class identified." << RESET << std::endl;
        return;
    }
    catch (std::exception& e) {}

    std::cout << RED << "Can't identify the type" << std::endl;
}