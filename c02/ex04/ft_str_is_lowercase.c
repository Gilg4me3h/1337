/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballout <mballout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:28:25 by mballout          #+#    #+#             */
/*   Updated: 2025/08/21 15:28:26 by mballout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            return (0);
        }
        i++;
    }
    return (1);
}
