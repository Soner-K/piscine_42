/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:07:46 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/11 16:29:39 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
        (void) argc;
printf("%d! = %d", atoi(argv[1]), ft_recursive_factorial(atoi(argv[1])));
return 1;
}*/
