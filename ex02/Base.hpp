/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:29:01 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/05 19:48:44 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define RED    "\x1b[31m"
# define GREEN   "\x1b[32m"
# define CYAN    "\x1b[36m"
# define YELLOW  "\x1b[33m"
# define RESET   "\x1b[0m"

#include <iostream>
#include <cstdlib>

class Base {
	public:
		virtual ~Base(void);
		
		static Base* generate(void);
		static void identify(Base* p);
		static void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
