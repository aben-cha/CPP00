/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:55 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/18 18:47:17 by aben-cha         ###   ########.fr       */
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

void enterCommand(std::string& str) {
    std::cout << "Enter one of three commands bellow [ADD, SEARCH, EXIT] : ";
    std::cin >> str;
}

int enterFields(Contact& contact, int flag, std::string& index) {
    std::string str;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (flag)
    {
        std::cout << "Index          : ";
        getline(std::cin, index);
        if (index.length() > 1 || (!(index[0] >= '0' && index[0] <= '9')))
        {
            std::cout << "the index is out of range." << std::endl;
            return (1);
        }
    }
    std::cout << "First Name     : ";
    getline(std::cin, str);
    contact.setFirstName(str);
    std::cout << "Last Name      : ";
    getline(std::cin, str);
    contact.setLastName(str);
    std::cout << "nickName       : ";
    getline(std::cin, str);
    contact.setNickName(str);
    if (!flag)
    {
        std::cout << "Phone Number   : ";
        getline(std::cin, str);
        contact.setPhoneNumber(str);
        std::cout << "Darkest Secret : ";
        getline(std::cin, str);
        contact.setDarkestSecret(str);   
    }
    return (0);
}
