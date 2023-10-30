/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:49:25 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/11 16:33:16 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void) argc;
printf( "%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}*/
