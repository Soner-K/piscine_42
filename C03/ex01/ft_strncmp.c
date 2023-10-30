/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:31:45 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/06 13:51:26 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	int					result;

	i = 0;
	result = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		result = (unsigned char) s1[i] - (unsigned char) s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (result);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
        char s1[] = "abc";
	s1[0] = 200;
        char s2[] = "abc";

printf("%d\n", ft_strncmp(s1, s2, 4));
printf("%d", strncmp(s1, s2, 4));
}*/
