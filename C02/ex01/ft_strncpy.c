/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:50:06 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/04 20:35:42 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s \n", ft_strncpy(argv[1], argv[2], 5));
	printf("%s", strncpy(argv[1], argv[2], 5));
}*/
