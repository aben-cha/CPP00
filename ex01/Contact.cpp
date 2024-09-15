/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:55 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/15 22:09:29 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

// Contact::Contact(std::string firstname, 
//                 std::string lastname, 
//                 std::string nickName, 
//                 std::string phonenumber, 
//                 std::string darkestsecret) :
//                 firstName(firstname), 
//                 lastName(lastname),
//                 nickName(nickName),
//                 phoneNumber(phonenumber),
//                 darkestSecret(darkestsecret)
                          
// {
// }

// Contact::Contact(){
//     // std::cout << "Constructor Contact." << std::endl;
// }

// Contact::~Contact() {
//     static int k = 0;
//     // std::cout << "Destructor Contact." << k++ <<std::endl;
// }

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickName() {
    return nickName;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}
std::string Contact::getDarkestSecret() {
    return darkestSecret;
}

