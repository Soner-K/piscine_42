/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cornguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:50:52 by cornguye          #+#    #+#             */
/*   Updated: 2023/07/09 17:51:01 by cornguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		verif_edge_l(int tab[][4], int *edges, int row);
int		verif_edge_r(int tab[][4], int *edges, int row);
void	row_left(int tab[][4], int *edges, int row, int col);
void	row_right(int tab[][4], int *edges, int row, int col);
void	col_up(int tab[][4], int *edges, int row, int col);
void	col_down(int tab[][4], int *edges, int row, int col);
void	array_zero(int tab[][4]);
void	check_and_print(int tab[][4], int *edges);

int	tiny_atoi(char *c)
{
	int	number;

	number = *c - '0';
	return (number);
}

int	doublon(int valeur, int num_ligne, int num_colonne, int tab[][4])
{
	int	i;
	int	j;
	int	cpt_valeur;

	i = 0;
	j = 0;
	cpt_valeur = 0;
	while (j < 4)
	{
		if (tab[num_ligne][j] == valeur)
			cpt_valeur++;
		j++;
	}
	while (i < 4)
	{
		if (tab[i][num_colonne] == valeur)
			cpt_valeur++;
		i++;
	}
	if (cpt_valeur > 0)
		return (0);
	else
		return (1);
}

int	add_number(int tab[][4], int nb_l, int compteur)
{
	int	compteur2;
	int	total_l;
	int	ko;

	total_l = 0;
	compteur2 = 0;
	while (compteur2 < 4)
	{
		total_l = total_l + tab[nb_l][compteur2];
		compteur2++;
	}
	if (total_l == 10 || compteur > 1000)
		return (1);
	ko = 0;
	while (ko < 4)
	{
		if (compteur != tab[nb_l][ko] && tab[nb_l][ko] == 0
			&& doublon(compteur, nb_l, ko, tab))
			tab[nb_l][ko] = compteur;
		ko++;
	}
	if (compteur + 1 != 5)
		add_number(tab, nb_l, compteur + 1);
	return (0);
}

void	rush(int *edges)
{
	int	tab[4][4];

	array_zero(tab);
	row_left(tab, edges, 0, 0);
	row_right(tab, edges, 0, 3);
	col_up(tab, edges, 0, 0);
	col_down(tab, edges, 3, 0);
	check_and_print(tab, edges);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int	edges[16];

	i = 0;
	count = 0;
	(void) argc;
	while (argv[1][i])
	{
		if ((argv[1][i] > '0' && argv[1][i] <= '4') || argv[1][i] == ' ')
		{
			if (argv[1][i] > '0' && argv[1][i] <= '4')
			{
				edges[count] = tiny_atoi(&argv[1][i]);
				count++;
			}
		}
		else
			return (0);
		i++;
	}
	if (count != 16 || i != 31)
		return (0);
	rush(edges);
	return (0);
}
