/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cornguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:52:20 by cornguye          #+#    #+#             */
/*   Updated: 2023/07/09 18:52:25 by cornguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	row_left(int tab[][4], int *edges, int row, int col)
{
	int	i;

	i = 8;
	while (row < 4)
	{
		if (edges[i] == 4)
		{
			while (col < 4)
			{
				if (tab[row][col] == 0 || tab[row][col] == col + 1)
					tab[row][col] = col + 1;
				col++;
			}
		}
		else if (edges[i] == 1)
			tab[row][col] = 4;
		row++;
		i++;
		col = 0;
	}
}

void	row_right(int tab[][4], int *edges, int row, int col)
{
	int	i;
	int	number;

	i = 12;
	number = 1;
	while (row < 4)
	{
		if (edges[i] == 4)
		{
			while (col >= 0)
			{
				if (tab[row][col] == 0 || tab[row][col] == number)
					tab[row][col] = number;
				number++;
				col--;
			}
		}
		else if (edges[i] == 1)
			tab[row][col] = 4;
		row++;
		i++;
		col = 3;
	}
}

void	col_up(int tab[][4], int *edges, int row, int col)
{
	int	i;

	i = 0;
	while (col < 4)
	{
		if (edges[i] == 4)
		{
			while (row < 4)
			{
				if (tab[row][col] == 0 || tab[row][col] == row + 1)
					tab[row][col] = row + 1;
				row++;
			}
		}
		else if (edges[i] == 1)
			tab[row][col] = 4;
		col++;
		i++;
		row = 0;
	}
}

void	col_down(int tab[][4], int *edges, int row, int col)
{
	int	i;
	int	number;

	i = 4;
	number = 1;
	while (col < 4)
	{
		if (edges[i] == 4)
		{
			while (row >= 0)
			{
				if (tab[row][col] == 0 || tab[row][col] == number)
					tab[row][col] = number;
				number++;
				row--;
			}
		}
		else if (edges[i] == 1)
			tab[row][col] = 4;
		col++;
		i++;
		row = 3;
	}
}

void	array_zero(int tab[][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}
