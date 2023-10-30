/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:54:30 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/01 10:05:51 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_rev_int_tab(int *tab, int size)
{
	float	n;
	int		i;
	int		j;

	n = size / 2;
	i = 0;
	j = size - 1;
	while (i < n)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
int main()
{
	int tab[] = {0,1,2,3,4,5};
	int i = 0;
	int size = 6;

	ft_rev_int_tab(tab, size);
	while(i < size){
		printf(" %d", tab[i]);
		i++;
	}
}
*/
