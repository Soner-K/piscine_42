/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:57:09 by sokaraku          #+#    #+#             */
/*   Updated: 2023/07/08 10:20:52 by sokaraku         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		i = 0;
		j++;
	}
}
/*
int main()
{
	int tab[] = {104,99,13,404,2};
	int size = 5;
	int i = 0;

	while (i < size){
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);
	i = 0;
	while (i<size){
                printf("%d ", tab[i]);
                i++;
        }
}
*/
