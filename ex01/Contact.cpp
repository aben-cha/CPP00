/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:55 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/14 23:37:07 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(std::string firstname, 
                std::string lastname, 
                std::string nickName, 
                std::string phonenumber, 
                std::string darkestsecret) :
                firstName(firstname), 
                lastName(lastname),
                nickName(nickName),
                phoneNumber(phonenumber),
                darkestSecret(darkestsecret)
                          
{
}

Contact::Contact(){
    // std::cout << "Constructor Contact." << std::endl;
}

Contact::~Contact() {
    static int k = 0;
    // std::cout << "Destructor Contact." << k++ <<std::endl;
}
