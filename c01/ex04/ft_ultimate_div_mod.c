/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballout <mballout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:12:35 by mballout          #+#    #+#             */
/*   Updated: 2025/08/17 22:16:20 by mballout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{  
        int d;
        int c;

        c = *a;
        d = *b;
        *a = c / d;
        *b = c % d;
}
int main()
{
    int a = 10;
    int b = 2;
    ft_ultimate_div_mod(&a,&b);
    printf("%d",a);
    printf("\n%d",b);
}