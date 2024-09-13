/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:48:41 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/13 22:26:14 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

Student::Student() {
    std::cout << "Constructor" << std::endl;
}
Student::~Student() {
    std::cout << "Destructor" << std::endl;
}
void Student::printName() {
    std::cout << "Name : " << name << std::endl;
}            
int main()
{
    Student ayoub;
    ayoub.name = "aben-cha";
    ayoub.printName();
    return (0);
}