/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:27:42 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/10 10:31:30 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	reverse_j;

	i = 0;
	reverse_j = argc - 1;
	while (reverse_j >= 1)
	{
		while (argv[reverse_j][i])
		{
			ft_putchar(argv[reverse_j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		reverse_j--;
	}
}
