/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:55 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/08 17:56:26 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

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

int enterCommand(std::string line, std::string& index) {
    std::cout << line;
    std::getline(std::cin, index);
    if (std::cin.eof())
        return 1;
    return 0;
}

int isValidIndex(std::string& index) {
    if (index.length() > 1 || (!(index[0] >= '0' && index[0] <= '9')))
    {
        std::cout << "the index is out of range." << std::endl;
        return 1;
    }
    return (0);
}

int readInput(std::string& str, std::string enter, Contact& contact, int flag) {
    if (enterCommand(enter, str))
        std::exit(1);
    if (flag == 1)
        contact.setFirstName(str);
    else if (flag == 2)
        contact.setLastName(str);
    else if (flag == 3)
        contact.setNickName(str);
    else if (flag == 4)
        contact.setPhoneNumber(str);
    else if (flag == 5)
        contact.setDarkestSecret(str);
    if (str.empty())
    {
        std::cout << "A saved contact can’t have empty fields." << std::endl;
        return (1);
    }
    return 0;
}

int enterFields(Contact& contact) {
    std::string str;
    
    if (readInput(str, "First Name     : ", contact, 1)
        || readInput(str, "Last Name      : ", contact, 2)
        || readInput(str, "nickName       : ", contact, 3)
        || readInput(str, "Phone Number   : ", contact, 4)
        || readInput(str, "Darkest Secret : ", contact, 5))
        return (1);
    return (0);
}
