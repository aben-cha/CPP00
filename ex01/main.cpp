/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:51 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/13 21:55:32 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
    public:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

class PhoneBook {
    public:
        Contact contact[8];
};

void enterCommand(std::string& str)
{
    std::cout << "Enter one of three commands bellow : [ADD, SEARCH, EXIT] : ";
    std::cin >> str;
}

// void displayContact();

void enterFields(Contact& contact)
{
    std::cout << "First Name     : ";
    std::cin >> contact.firstName;
    std::cout << "Last Name      : ";
    std::cin >> contact.lastName;
    std::cout << "Nickname       : ";
    std::cin >> contact.nickname;
    std::cout << "Phone Number   : ";
    std::cin >> contact.phoneNumber;
    std::cout << "Darkest Secret : ";
    std::cin >> contact.darkestSecret;
}

void saveContact(PhoneBook& phoneBook, Contact contact)
{
    phoneBook.contact[0] = contact;
}


int main()
{
    std::string str;
    Contact     contact;
    PhoneBook   phoneBook;

    enterCommand(str);
    enterFields(contact);
    saveContact(phoneBook, contact);
    std::cout << "name   : " << phoneBook.contact[0].firstName << std::endl;
    std::cout << "last   : " << phoneBook.contact[0].lastName << std::endl;
    std::cout << "nick   : " << phoneBook.contact[0].nickname << std::endl;
    std::cout << "phone  : " << phoneBook.contact[0].phoneNumber << std::endl;
    std::cout << "secret : " << phoneBook.contact[0].darkestSecret << std::endl;
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