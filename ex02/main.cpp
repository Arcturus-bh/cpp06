/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldalmas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:47:34 by aldalmas          #+#    #+#             */
/*   Updated: 2025/04/05 20:42:09 by aldalmas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    srand(time(NULL));
    
    Base* d;
    d = Base::generate();
    Base::identify(d);
    
    delete d;
    //
    A a;
    B b;
    C c;
    
    Base::identify(a);
    Base::identify(b);
    Base::identify(c);
    
    return 0;
}