/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:29:44 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/17 23:21:25 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void toUpperCase(std::string str)
{
    int i;
    char c;
    
    i = -1;
    while (++i < str.size())
    {
        c = toupper(str[i]);
        std::cout << c;
    }
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    while (++i < ac)
    {
        toUpperCase(av[i]);
        if (i != ac - 1)
            std::cout << " ";  
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
