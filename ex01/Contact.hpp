/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:16:26 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/08 17:20:44 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void setFirstName(std::string);
        void setLastName(std::string);
        void setNickName(std::string);
        void setPhoneNumber(std::string);
        void setDarkestSecret(std::string);
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};

int enterFields(Contact& contact);
int isValidIndex(std::string& index);
int enterCommand(std::string line, std::string& index);
int readInput(std::string& str, std::string enter, Contact& contact, int flag);

#endif