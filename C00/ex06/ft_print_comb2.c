/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 08:24:55 by sokaraku          #+#    #+#             */
/*   Updated: 2023/06/29 18:29:41 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_to_char(int couple_1, int couple_2)
{
	int	first_place;
	int	second_place;
	int	third_place;
	int	fourth_place;
	int	i;

	first_place = couple_1 / 10 + '0';
	second_place = couple_1 % 10 + '0';
	third_place = couple_2 / 10 + '0';
	fourth_place = couple_2 % 10 + '0';
	i = -1 ;
	while (i++)
	{
		write(1, &first_place, 1);
		write(1, &second_place, 1);
		write(1, " ", 1);
		write(1, &third_place, 1);
		write(1, &fourth_place, 1);
		if (couple_1 == 98 && couple_2 == 99)
			break ;
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	couple_1;
	int	couple_2;

	couple_1 = 0;
	couple_2 = 1;
	while (couple_1 != 99)
	{
		while (couple_2 != 100)
		{
			ft_int_to_char(couple_1, couple_2);
			couple_2++;
		}
		couple_1++;
		couple_2 = couple_1 + 1;
	}
}
/*
int main()
{
	ft_print_comb2();
}
*/
