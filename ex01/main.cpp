/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/17 23:22:10 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>


void enterCommand(std::string& str)
{
    std::cout << "Enter one of three commands bellow [ADD, SEARCH, EXIT] : ";
    std::cin >> str;
}

int enterFields(Contact& contact, int flag, std::string& index)
{
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

int main()
{
    std::string index;
    std::string str;
    Contact     contact;
    PhoneBook   phonebook;
    
    while (1)
    {
        enterCommand(str);
        if (str.compare("ADD") == 0)
        {
            std::cout << "contact number : " << phonebook.getContactCount() << std::endl;
            enterFields(contact, 0, index);
            phonebook.saveUser(contact);
        }
        else if (str.compare("SEARCH") == 0)
        {
            phonebook.displayContacts();
            if (!enterFields(contact, 1, index))
                phonebook.searchContact(contact, index);
        }
        else if (str.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Invalid Command, try again." << std::endl;
    }
    return (0);
}


