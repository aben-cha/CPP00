/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:29:44 by aben-cha          #+#    #+#             */
/*   Updated: 2024/10/08 13:07:59 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    std::string s;

    i = 0;
    while (++i < ac)
    {
        j = 0;
        s = av[i];
        while (s[j])
            std::cout << (char)std::toupper(s[j++]);
        if (i != ac - 1)
            std::cout << " ";  
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
