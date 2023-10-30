/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cornguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:59:46 by cornguye          #+#    #+#             */
/*   Updated: 2023/07/09 17:59:59 by cornguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	add_number(int tab[][4], int nb_l, int compteur);

int	verif_edge_l(int tab[][4], int *edges, int row)
{
	int	count;
	int	col;
	int	value;
	int	i;

	i = 8;
	col = 0;
	count = 1;
	while (i < 12)
	{
		value = tab[row][col++];
		while (col < 4)
		{
			count += (value < tab[row][col]);
			value = tab[row][col++];
		}
		if (count != edges[i - 8])
			return (0);
		row++;
		i++;
	}
	return (1);
}

int	verif_edge_r(int tab[][4], int *edges, int row)
{
	int	count;
	int	i;
	int	col;
	int	value;

	col = 3;
	count = 1;
	i = 12;
	while (i < 16)
	{
		value = tab[row][col--];
		while (col >= 0)
		{
			count += (value < tab[row][col]);
			value = tab[row][col--];
		}
		if (count != edges[i - 12])
			return (0);
		row++;
		i++;
	}
	return (1);
}

void	print(int tab[][4])
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp = tab[i][j] + '0';
			write(1, &temp, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	check_and_print(int tab[][4], int *edges)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == 0)
			{
				add_number(tab, i, 0);
				verif_edge_l(tab, edges, i);
				verif_edge_r(tab, edges, i);
			}
			j++;
		}
		i++;
	}
	print(tab);
}
