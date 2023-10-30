/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:04:59 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/06 09:33:03 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;
	int				diff;
	int				i;

	i = 0;
	s1_cp = (unsigned char *) s1;
	s2_cp = (unsigned char *) s2;
	diff = s1_cp[i] - s2_cp[i];
	while (s1_cp[i] || s2_cp[i])
	{
		diff = s1_cp[i] - s2_cp[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}
/*#include <stdio.h>
int main()
{
        char s1[] = "";
//	s1[0] = 240;
        char s2[] = "";

printf("%d", ft_strcmp(s1, s2));
}*/
