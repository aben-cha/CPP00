/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:15:42 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/16 00:44:29 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>      // std::setw

PhoneBook::PhoneBook() {
    this->contactCount = 0;
    // std::cout << "Constructor phonebook." << std::endl;
}

void PhoneBook::setContactCount(int contactCount) {
    this->contactCount = contactCount;
}

int  PhoneBook::getContactCount() {
    return contactCount;
}

void print_str(std::string str, int flag)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
    if(!flag)
        std::cout << std::endl;
    if (flag == 1)
        std::cout << "|";
}

void PhoneBook::saveUser(Contact contact) {
    if (contact.getFirstName().empty() || contact.getLastName().empty()
        || contact.getNickName().empty() || contact.getPhoneNumber().empty()
        || contact.getDarkestSecret().empty())
    {
        std::cout << "A saved contact can’t have empty fields." << std::endl;
        return ;
    }
    if (contactCount < 0 || contactCount > 8)
    {
        std::cout << "the index is out of range.";
        return ;
    }
    if (contactCount == 8)
        this->contact[--contactCount] = contact;
    this->contact[contactCount++] = contact;
    std::cout << "User added successfully." << std::endl;
}

void PhoneBook::dispalyContact(Contact contact, int index)
{
    std::cout << index << "|"; 
    print_str(contact.getFirstName(), 1);
    print_str(contact.getLastName(), 1);
    print_str(contact.getNickName(), 0);
}

void PhoneBook::displayContacts() {
    int i;

    i = 0;
    while (i < contactCount)
    {
        std::cout << i << "|           "
        << contact[i].getFirstName() << "|           "
        << contact[i].getLastName() << "|           "
        << contact[i].getNickName() << std::endl;
        i++;
    } 
}

void PhoneBook::searchContact(Contact contact, int index)
{
    int flag;
    int i;
    
    i = 0;
    flag = 0;
    while (i < contactCount)
    {
        if (i == index)
        {
            if (!this->contact[i].getFirstName().compare(contact.getFirstName())
                || !this->contact[i].getLastName().compare(contact.getLastName())
                || !this->contact[i].getNickName().compare(contact.getNickName()))
                flag = 1;
        }
        if (flag)
        {
            dispalyContact(contact, index);
            return ;
        }
        i++;
    }
    if (!flag)
        std::cout << "the contact didn't exist." << std::endl;
}
