/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballout <mballout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 20:13:07 by mballout          #+#    #+#             */
/*   Updated: 2025/08/17 23:45:01 by mballout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{

    int  a;
    a = 0;

    int z;
    z = size - 1;

    int tmp;

    while(a < (size / 2))
    {
  

        tmp = tab[a];
        tab[a] = tab[z];
        tab[z] = tmp;

        a++;
  
        z--;

    }
}
int main()
{
    int tmp[] = {0,7,,19};
    ft_rev_int_tab(tmp, 5);
    int i= 0;
    while(i < 5)
    {
        printf("%d", tmp[i]);
        i++;
    printf("\n");
    }
}
