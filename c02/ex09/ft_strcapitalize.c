/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballout <mballout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:54:27 by mballout          #+#    #+#             */
/*   Updated: 2025/08/21 20:02:16 by mballout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
  
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if((str[i] >= 'a' && str[i] <= 'z'))
        {
        if (i == 0 || !((str[i - 1] >= 'a' &&  str[i - 1] <= 'z')
        || (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
        || (str[i - 1] >= '0' && str[i - 1] <= '9'))
        )
        
            str[i] -= 32;
        }
        
        i++;
        
    }
    str[i] = '\0';
    return str;
}
int main()
{
    char str[] = "hi, my name is fKGKtu+gads";
    char *rtr = ft_strcapitalize(str);
    printf("%s", rtr);
}