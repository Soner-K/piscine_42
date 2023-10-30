/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:27:16 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/01 10:02:06 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 10;
	int b = 3;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("div = %d mod = %d", div, mod);
}
*/
