/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:16:42 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/15 23:39:59 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
class PhoneBook {
    private:
        int contactCount;
        Contact contact[8];
    public:
        PhoneBook();
        void setContactCount(int);
        int  getContactCount();
        void saveUser(Contact contact);
        void dispalyContact(Contact contact, int index);
        void displayContacts();
        void searchContact(Contact contact, int index);
};


#endif
