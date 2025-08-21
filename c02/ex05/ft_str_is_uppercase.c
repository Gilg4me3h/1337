/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballout <mballout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:33:11 by mballout          #+#    #+#             */
/*   Updated: 2025/08/21 16:33:13 by mballout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < 'A' ||   str[i]  > 'Z')
        {
            return (0);
        }
        i++;
        
    }
    return (1);
    
}
int main()
{
    char str[] = "RDW";
    printf("%d", ft_str_is_uppercase(str));
}