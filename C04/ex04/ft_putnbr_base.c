/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:59:21 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/08 10:28:59 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_error(int i, int j, char *str)
{
	i = 0;
	j = 1;
	if (str[i] == 0 || str[i + 1] == 0)
		return (1);
	while (str[i])
	{
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		nb_div;
	int		nb_mod;
	long	long_nbr;

	i = ft_strlen(base);
	long_nbr = nbr;
	if (ft_error(100, 100, base) == 1)
		return ;
	if (long_nbr < 0)
	{
		long_nbr *= -1;
		ft_putchar('-');
	}
	nb_div = long_nbr / i;
	nb_mod = long_nbr % i;
	if (long_nbr >= i)
		ft_putnbr_base(nb_div, base);
	ft_putchar(base[nb_mod]);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
//	char base[]= "0123456789ABCDE";

//	ft_putnbr_base(-1478, base);

	ft_putnbr_base(atoi(argv[1]), argv[2]);
}*/
