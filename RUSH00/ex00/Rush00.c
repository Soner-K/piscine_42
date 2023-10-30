/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabonny- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:24:35 by mabonny-          #+#    #+#             */
/*   Updated: 2023/07/02 20:49:48 by mabonny-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	line(int x, char left, char middle, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i < x - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, char y)
{
	int	i;

	i = 0;
	if (!x || !y)
		return ;
	line(x, 'o', '-', 'o');
	while (i < y - 2)
	{
		line(x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
		line(x, 'o', '-', 'o');
}
