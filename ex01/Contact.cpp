/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:55 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/14 00:05:52 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(std::string firstname, 
                std::string lastname, 
                std::string nickname, 
                std::string phonenumber, 
                std::string darkestsecret) :
                firstName(firstname), 
                lastName(lastname),
                nickname(nickname),
                phoneNumber(phonenumber),
                darkestSecret(darkestsecret)
                          
{
}

Contact::Contact(void) {}
