/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:18:21 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/04 19:58:22 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <bsd/string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*int main()
{
	char	test[] = "Salut";
	char	test2[] = "abc";

	printf("%d\n", ft_strlcpy(test, test2, 0));
	printf("%s\n", test);

	char	test3[] = "Salut";
	char	test4[] = "abc";

	printf("%ld\n", strlcpy(test3, test4, 0));
	printf("%s\n", test3);
}*/
