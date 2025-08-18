/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballout <mballout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:54:30 by mballout          #+#    #+#             */
/*   Updated: 2025/08/16 18:58:19 by mballout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_char(a / 10 + '0');
			put_char(a % 10 + '0');
			put_char(' ');
			put_char(b / 10 + '0');
			put_char(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				put_char(',');
				put_char(' ');
			}
			b++;
		}
		a++;
	}
}
