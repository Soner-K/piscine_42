/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:08 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/01 10:02:42 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modded;

	division = *a / *b;
	modded = *a % *b;
	*a = division;
	*b = modded;
}
/*
int main()
{
	int a = 10, b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("a = %d b = %d", a, b);
}
*/
