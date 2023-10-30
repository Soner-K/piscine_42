/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:09:44 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/08 12:10:49 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(to_find);
	if (j < 1)
		return (str);
	j = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
(void) ac;
//char s1[] = "Salut commenttu vas";
//char s2[] = "tu vas";
//printf("%s", ft_strstr(s1, s2));
printf("strstr(%s, %s) = %s\n", av[1], av[2], strstr(av[1], av[2]));
printf("ft_strstr(%s, %s) = %s\n", av[1], av[2], ft_strstr(av[1], av[2]));
}*/
