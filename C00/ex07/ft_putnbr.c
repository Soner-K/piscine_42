/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:20:36 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/05 10:59:52 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putnbr(int nb)
{
	int	number_div;
	int	number_modded;
	
	if (!(nb == -2147483648))
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		number_div = nb / 10;
		number_modded = nb % 10;
		if (nb >= 10)
		{
			ft_putnbr(number_div);
		}
		number_modded += '0';
		write(1, &number_modded, 1);
	}
	else
		write(1, "-2147483648", 11);
}

int main()
{
ft_putnbr(-2147483648);
write(1, "\n", 1);
ft_putnbr(2147483647);
write(1, "\n", 1);
ft_putnbr(-10);
write(1, "\n", 1);
ft_putnbr(0);
write(1, "\n", 1);
ft_putnbr(15);
}

