/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:55:18 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/11 17:07:50 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(result, power - 1) * result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
        (void) argc;
printf( "%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}*/
