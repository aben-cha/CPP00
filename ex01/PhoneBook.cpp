/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:42 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/09 11:54:30 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() {
    this->contactCount = 0;
    this->oldestContact = 0;
}

void PhoneBook::setContactCount(int contactCount) {
    this->contactCount = contactCount;
}

int  PhoneBook::getContactCount() {
    return contactCount;
}

void print_str(std::string str, int flag) {
    int i;
    
    i = 0;
    while (str[i]) 
    {
        if (str[i] == '\t')
            str[i] = ' ';
        i++;
    }
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else if (str.length() == 10)
        std::cout << str;
    else
        std::cout << std::setw(10) << str;
    if (flag)
        std::cout << "|";
    if (!flag)
        std::cout << std::endl;
}

void PhoneBook::saveUser(Contact contact) {
    if (contactCount >= 8)
    {
        if(oldestContact >= 8)
            oldestContact = 0;
        this->contact[oldestContact++] = contact;
    }
    else
        this->contact[contactCount++] = contact;
    std::cout << "User added successfully." << std::endl;
}

void PhoneBook::dispalyContact(Contact contactInfo, int index, int flag) {
    if (!flag) {
        std::cout << std::setw(10) << index << "|";
        print_str(contactInfo.getFirstName(), 1);
        print_str(contactInfo.getLastName(), 1);
        print_str(contactInfo.getNickName(), 0);
    }
    else {
    std::cout << "Contact Information:" << std::endl
              << "First Name     : " << contact[index].getFirstName() << std::endl
              << "Last Name      : " << contact[index].getLastName() << std::endl
              << "Nickname       : " << contact[index].getNickName() << std::endl
              << "Phone Number   : " << contact[index].getPhoneNumber() << std::endl
              << "Darkest Secret : " << contact[index].getDarkestSecret() << std::endl;
    }

}

int PhoneBook::displayContacts() {
    int i;

    i = 0;
    while (i < contactCount)
    {
        dispalyContact(contact[i], i, 0);
        i++;
    }
    if (i == 0)
    {
        std::cout << "No Contact Exist." << std::endl;
        return 1;
    }
    return 0;
}

void PhoneBook::searchContact(Contact contact, int index) {
    int flag;
    int i;
    
    i = 0;
    flag = 0;
    while (i < contactCount)
    {
        if (i == index)
        {
            flag = 1;
            dispalyContact(contact, i, 1);
            return ;
        }
        i++;
    }
    if (!flag)
        std::cout << "the contact didn't exist." << std::endl;
}
    