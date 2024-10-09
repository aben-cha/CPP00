/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/09 11:51:23 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string str;
    Contact     contact;
    PhoneBook   phonebook;
    
    while (1)
    {
        if (enterCommand("Enter one of three commands bellow [ADD, SEARCH, EXIT] : ", str))
            break;
        if (str.compare("ADD") == 0)
        {
            std::cout << "contact number : " << phonebook.getContactCount() << std::endl;
            if (!enterFields(contact))
                phonebook.saveUser(contact);
        }
        else if (str.compare("SEARCH") == 0)
        {
            if (!phonebook.displayContacts()) {
                if (enterCommand("Index          : ", str))
                    break;
                if (!isValidIndex(str))
                    phonebook.searchContact(contact, str[0] - '0');
            }
        }
        else if (str.compare("EXIT") == 0)
            break ;
        else
            std::cout << "Invalid Command, try again." << std::endl;
    }
    return (0);
}


