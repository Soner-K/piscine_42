/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:24:55 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/04 11:36:59 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char	dest[]="Salut";
	char	src[]="tul";

	ft_strcpy(dest, src);

	printf("%s \n", dest);

	char dest2[] = "Salut";
	char src2[] = "tul";

	printf("%s", strcpy(dest2, src2));
}
*/
