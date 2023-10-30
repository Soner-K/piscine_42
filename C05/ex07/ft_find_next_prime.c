/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:11:44 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/11 16:59:31 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_2(int nb)
{
	long	i;

	i = nb;
	if (nb <= 0)
		return (0);
	while ((i * i) > nb)
		i /= 2;
	while ((i * i) <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	squared;

	i = 2;
	squared = ft_sqrt_2(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= squared)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (2);
	while (ft_is_prime(nb + i) != 1)
	{
		i++;
	}
	return (nb + i);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	ac = ac;
printf("next_prime(%s) = %d", av[1], (ft_find_next_prime(atoi(av[1]))));
}*/
