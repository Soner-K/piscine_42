/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:53:01 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/03 20:39:38 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (! ((str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char test[]="123";
	printf("%d", ft_str_is_numeric(test));
}
*/
