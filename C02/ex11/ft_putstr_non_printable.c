/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:38:33 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/04 20:31:42 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &"\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_convert_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
char str[] = "Coucou\n \rtu vas bien ?";
str[2] = 147;
ft_putstr_non_printable(str);
}
*/
