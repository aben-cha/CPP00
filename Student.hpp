/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 22:14:10 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/13 22:26:19 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>


class Student {
    public:
        std::string name;
    public :
        // Actions Consructor
        Student();
        // Actions Destructor ==> destroy objects
        ~Student();
        // Action Print the student name
        void printName();
};

#endif