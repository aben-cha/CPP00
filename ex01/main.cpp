/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/15 00:33:55 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

#include <iostream>

void enterCommand(std::string& str)
{
    std::cout << "Enter one of three commands bellow : [ADD, SEARCH, EXIT] : ";
    std::cin >> str;
}

void dispalyContact(Contact& contact, int index)
{
    std::cout << "index          |          firstName          |          lastName          |          nickName" 
              << std::endl
              << index << "              |          "  
              << contact.firstName << "          |          " 
              << contact.lastName << "          |          "
              << contact.nickName
              << std::endl;
}
void searchContact(PhoneBook& phonebook, Contact contact, int index)
{
    int flag;


    flag = 0;
    if (index < 0 || index > 7)
            return ;
    while (phonebook.contactCount--)
    {
        if (phonebook.contactCount == index)
        {
            if (!phonebook.contact[phonebook.contactCount].firstName.compare(contact.firstName)
                || !phonebook.contact[phonebook.contactCount].lastName.compare(contact.lastName)
                || !phonebook.contact[phonebook.contactCount].nickName.compare(contact.nickName))
                    flag = 1;
        }
        if (flag)
        {
            dispalyContact(phonebook.contact[phonebook.contactCount], index);
            return ;
        }
    }
    if (!flag)
    {
        std::cout << "the contact didn't exist." << std::endl;
        return ;
    }
}


void enterFields(Contact& contact, int flag, int& index)
{
    if (flag)
    {
        std::cout << "Index          : ";
        std::cin >> index;
    }
    if (index < 0 || index > 7)
    {
        std::cout << "the index is out of range." << std::endl;
        return ;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "First Name     : ";
    getline(std::cin, contact.firstName);
    std::cout << "Last Name      : ";
    getline(std::cin, contact.lastName);
    std::cout << "nickName       : ";
    getline(std::cin, contact.nickName);
    if (!flag)
    {
        std::cout << "Phone Number   : ";
        getline(std::cin, contact.phoneNumber);
        std::cout << "Darkest Secret : ";
        getline(std::cin, contact.darkestSecret);   
    }
}

void saveContact(PhoneBook& phonebook, Contact& contact)
{
    if (contact.firstName.empty() || contact.lastName.empty()
        || contact.nickName.empty() || contact.phoneNumber.empty()
        || contact.darkestSecret.empty())
    {
        std::cout << "A saved contact can’t have empty fields." << std::endl;
        return ;
    }
    phonebook.contact[phonebook.contactCount++] = contact;
    std::cout << "User added successfully." << std::endl;
}

void displayContacts(PhoneBook& phonebook)
{
    while (phonebook.contactCount--)
    {
        std::cout << phonebook.contactCount << "          |          "
        << phonebook.contact[phonebook.contactCount].firstName << "          |          "
        << phonebook.contact[phonebook.contactCount].lastName << "          |          "
        << phonebook.contact[phonebook.contactCount].nickName << std::endl;
    } 
}


int main()
{
    int         index;
    std::string str;
    PhoneBook phonebook;
    
    index = 0;
    enterCommand(str);
    while (1)
    {
        if (str.compare("ADD") == 0)
        {
            std::cout << "contact number : " << phonebook.contactCount + 1 << std::endl;
            enterFields(phonebook.contact[phonebook.contactCount], 0, index);
            saveContact(phonebook, phonebook.contact[phonebook.contactCount]);
            std::cout << std::endl;
        }
        else if (str.compare("SEARCH") == 0)
        {
            displayContacts(phonebook);
            enterFields(phonebook.contact[phonebook.contactCount], 1, index);
            searchContact(phonebook, phonebook.contact[phonebook.contactCount], index);
        }
        else if (str.compare("EXIT") == 0)
            break ;
        enterCommand(str);
    }
    return (0);
}
