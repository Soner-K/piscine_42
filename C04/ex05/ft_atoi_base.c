/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:17:39 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/19 19:49:37 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error(int i, int j, char *str)
{
	i = 0;
	j = 1;
	if (str[i] == 0 || str[i + 1] == 0)
		return (1);
	while (str[i])
	{
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] == '+') || (str[i] == '-') || (str[i] == 32)
			|| (str[i] >= 9 && str[i] <= 13))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check(char c, char *base, int *pos)
{
	int	i;

	i = 0;
	*pos = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			*pos = i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_len(char *str, int *mod_n)
{
	int	i;

	i = 0;
	*mod_n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			(*mod_n)++;
		i++;
	}
	*mod_n %= 2;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	pos;
	int	base_len;
	int	i;
	int	mod_n;

	if (ft_error(0, 1, base) == 1)
		return (0);
	number = 0;
	base_len = ft_strlen(base);
	i = ft_atoi_len(str, &mod_n);
	while (ft_check(str[i], base, &pos) == 1)
	{
		if (ft_check(str[i + 1], base, &pos) == 0)
			break ;
		ft_check(str[i], base, &pos);
		number += pos;
		number *= base_len;
		i++;
	}
	if (ft_check(str[i], base, &pos) == 1)
		number += pos;
	if (mod_n == 0)
		return (number);
	return (-number);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}
