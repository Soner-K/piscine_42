/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:51:33 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/11 16:52:57 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
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
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	ac = ac;
	printf("sqrt de %s = %d", av[1], (ft_sqrt(atoi(av[1]))));
}*/
