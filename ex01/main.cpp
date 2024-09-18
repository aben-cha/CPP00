/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/18 18:47:00 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>

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


