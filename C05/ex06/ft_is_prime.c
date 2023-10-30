/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:23:24 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/12 10:43:20 by sokaraku         ###   ########.fr       */
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

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	(void) ac;
	printf("%d", ft_is_prime(atoi(av[1])));
}
