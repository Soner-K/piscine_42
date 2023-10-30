/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:22:03 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/07 22:55:06 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <bsd/string.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[i] && size != 0 && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
		dest[dest_len + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (dest_len + i);
}
/*
int main()
{
	char dest[50]="Salut";
	char src[]="Comment tu vas";
	int result;

	result = ft_strlcat(dest, src, 0);
	
	printf("%d %s \n", result, dest);

	char dest2[50]="Salut";
        char src2[]="Comment tu vas";
        int result2;

        result2 = strlcat(dest2, src2, 0);

	printf("%d %s \n", result2, dest2);

}*/
