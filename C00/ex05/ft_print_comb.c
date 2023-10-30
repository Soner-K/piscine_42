/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:32:04 by sokaraku          #+#    #+#             */
/*   Updated: 2023/06/29 15:58:37 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_loop(char a, char b, char c)
{
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a == '7' && b == '8' && c == '9')
					break ;
				write(1, ", ", 2);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '1';
	third = '2';
	ft_loop(first, second, third);
}
/*
int main()
{
	ft_print_comb();
}
*/
