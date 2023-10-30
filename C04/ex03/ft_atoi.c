/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:53:25 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/15 11:30:59 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count_neg;
	int	number_convert;

	i = 0;
	count_neg = 0;
	number_convert = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number_convert *= 10;
		number_convert += (str[i] - '0');
		i++;
	}
	if (count_neg % 2 == 0)
		return (number_convert);
	return (-number_convert);
}
/*#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("ft_atoi(%s) = %d\n", argv[1], ft_atoi(argv[1]));
		printf("atoi(%s) = %d", argv[1], atoi(argv[1]));
	}

//	printf("2 * %s = %d",argv[argc - 1], 2*ft_atoi(argv[argc -1]));
}*/
