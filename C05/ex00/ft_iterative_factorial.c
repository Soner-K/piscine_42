/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:49:11 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/11 16:28:30 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb --;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void) argc;
printf("%d! = %d", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
}*/
