/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 09:35:52 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/03 21:24:40 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (! (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& (str[i] >= 'a' && str[i] <= 'z')
			&& (! (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			if (str[i] != 32)
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char test[]="salut, comment tu vas ? 42mots quarante-deux;";

	printf("%s", ft_strcapitalize(test));
}*/
