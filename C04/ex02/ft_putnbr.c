/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:50:08 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/08 10:40:31 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	nb_divided;
	int	nb_modded;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	nb_divided = nb / 10;
	nb_modded = nb % 10;
	if (nb >= 10)
		ft_putnbr(nb_divided);
	nb_modded += '0';
	write(1, &nb_modded, 1);
}
/*
int main()
{
	ft_putnbr(-2147483648);
}*/
