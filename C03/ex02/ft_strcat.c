/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:56:56 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/05 19:15:15 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	j;

	dest_size = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[dest_size + j] = src[j];
		j++;
	}
	dest[dest_size + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
        char s1[10]="SALUT";
        char s2[10] = "SALT";
	char *sdest;

	sdest = ft_strcat(s1,s2);
printf("%s\n", sdest);

	char s3[10] = "SALUT";
	char s4[10] = "SALT";
	char *sdest2;

sdest2 = strcat(s3, s4); 	
printf("%s", sdest2);

}*/
