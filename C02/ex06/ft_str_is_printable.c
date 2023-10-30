/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:34:37 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/04 12:00:37 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] == 127))
			return (0);
		i ++;
	}
	return (1);
}
/*
int main()
{
	char test[]="Salut 345 \n ";

	printf("%d", ft_str_is_printable(test));
}
*/
