/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/14 00:10:09 by aben-cha         ###   ########.fr       */
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

// void displayContact();

void enterFields(Contact& contact)
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "First Name     : ";
    getline(std::cin, contact.firstName);
    std::cout << "Last Name      : ";
    getline(std::cin, contact.lastName);
    std::cout << "Nickname       : ";
    getline(std::cin, contact.nickname);
    std::cout << "Phone Number   : ";
    getline(std::cin, contact.phoneNumber);
    std::cout << "Darkest Secret : ";
    getline(std::cin, contact.darkestSecret);
}

// void saveContact(PhoneBook& phoneBook, Contact contact)
// {
//     phoneBook.contact[0] = contact;
// }

void printFields(Contact contact)
{
    std::cout << "name   : " << contact.firstName << std::endl 
              << "last   : " << contact.lastName << std::endl
              << "nick   : " << contact.nickname << std::endl
              << "phone  : " << contact.phoneNumber << std::endl
              << "secret : " << contact.darkestSecret << std::endl;
}

int main()
{
    std::string str;
    Contact contact;
    
    enterCommand(str);
    enterFields(contact);
    printFields(contact);
    // saveContact(phoneBook, contact);
    
    // while (1)
    // {
    //     if (str.compare("ADD") == 0)
    //     {
    //         std::cout << "first name : " << std::endl;
    //         break;
    //     }
    //     else if (str.compare("SEARCH") == 0)
    //     {
    //         std::cout << "display a specific contact" << std::endl;
    //         break;
    //     }
    //     else if (str.compare("EXIT") == 0)
    //     {
    //         std::cout << "quits" << std::endl;
    //         break;
    //     }
    //     else
    //     {
    //         std::cout << "Invalid Command" << std::endl;
    //         enterCommand(str);           
    //     }
    // }
    
    return (0);
}