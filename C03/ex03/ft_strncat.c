/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:56:54 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/05 19:25:40 by sokaraku         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	size;

	j = 0;
	size = ft_strlen(dest);
	while (src[j] && j < nb)
	{
		dest[size + j] = src[j];
		j++;
	}
	dest[size + j] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char s1[55] = "SALUT";
	char s2[] = "comment ca va";

	printf("%s\n", strncat(s1, s2, 0));

	char s3[55] = "SALUT";
        char s4[] = "comment ca va";

        printf("%s", ft_strncat(s3, s4, 0));
}*/
