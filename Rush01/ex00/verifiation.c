/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 14:19:22 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/19 18:00:39 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_tab(int **tab)
{
	int	i;

	i = -1;
	while (++i < 9)
		free(tab[i]);
	free(tab);
}

int		single_line_verif(int **tab, int row, int column)
{
	int		is_correct;
	int		cursor_verif;
	int		current_number;

	is_correct = 0;
	cursor_verif = 0;
	current_number = tab[row][column];
	while (cursor_verif < 9)
	{
		if (current_number == tab[row][cursor_verif])
			is_correct++;
		if (current_number == tab[cursor_verif][column])
			is_correct++;
		cursor_verif++;
	}
	if (is_correct > 2)
		return (0);
	return (1);
}

int		single_block_verif(int **tab, int row, int column)
{
	int		is_correct;
	int		cursor_verif;
	int		cursor_verif2;
	int		current_number;

	is_correct = 0;
	cursor_verif = row / 3 * 3;
	current_number = tab[row][column];
	while (cursor_verif < row / 3 * 3 + 3)
	{
		cursor_verif2 = column / 3 * 3;
		while (cursor_verif2 < column / 3 * 3 + 3)
		{
			if (current_number == tab[cursor_verif][cursor_verif2])
				is_correct++;
			cursor_verif2++;
		}
		cursor_verif++;
	}
	if (is_correct > 1)
		return (0);
	return (1);
}

int		verif(int **tab)
{
	int		row_count;
	int		column_count;

	row_count = 0;
	while (row_count < 9)
	{
		column_count = 0;
		while (column_count < 9)
		{
			if (tab[row_count][column_count])
			{
				if (!single_line_verif(tab, row_count, column_count))
					return (0);
				if (!single_block_verif(tab, row_count, column_count))
					return (0);
			}
			column_count++;
		}
		row_count++;
	}
	return (1);
}

int		verif_one_cell(int **tab, int row_count, int column_count)
{
	if (!single_line_verif(tab, row_count, column_count))
		return (0);
	if (!single_block_verif(tab, row_count, column_count))
		return (0);
	return (1);
}
