/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 10:42:56 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/19 18:11:47 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		backtraking(int **tab)
{
	int i;
	int j;
	int p;

	p = 1;
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			if (!tab[i][j])
			{
				p = 1;
				while (p < 10)
				{
					tab[i][j] = p++;
					if (verif_one_cell(tab, i, j) && backtraking(tab))
						return (1);
				}
				tab[i][j] = 0;
				return (0);
			}
	}
	return (1);
}

int		reverse_backtraking(int **tab)
{
	int i;
	int j;
	int p;

	p = 1;
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			if (!tab[i][j])
			{
				p = 9;
				while (p > 0)
				{
					tab[i][j] = p--;
					if (verif_one_cell(tab, i, j) && reverse_backtraking(tab))
						return (1);
				}
				tab[i][j] = 0;
				return (0);
			}
	}
	return (1);
}

int		**check_str(char **str)
{
	int i;
	int j;
	int **tab;

	tab = (int**)malloc(sizeof(int*) * 9);
	i = 0;
	while (str[++i])
	{
		if (ft_strlen(str[i]) != 9)
			error();
		tab[i - 1] = (int*)malloc(sizeof(int) * 9);
		j = -1;
		while (str[i][++j])
		{
			if (!IS_DIGIT(str[i][j]))
				error();
			if (str[i][j] == '.')
				tab[i - 1][j] = 0;
			else
				tab[i - 1][j] = str[i][j] - '0';
		}
	}
	if (!verif(tab))
		error();
	return (tab);
}

void	compare_tab(int **tab, int **tab2)
{
	int		row_count;
	int		column_count;

	row_count = 0;
	while (row_count < 9)
	{
		column_count = 0;
		while (column_count < 9)
		{
			if (!tab[row_count][column_count])
				error();
			if (tab[row_count][column_count] != tab2[row_count][column_count])
				error();
			column_count++;
		}
		row_count++;
	}
}

int		main(int ac, char **av)
{
	int **tab;
	int **tab2;

	if (ac != 10)
		error();
	tab = check_str(av);
	tab2 = check_str(av);
	backtraking(tab);
	reverse_backtraking(tab2);
	compare_tab(tab, tab2);
	print_tab(tab);
	free_tab(tab);
	free_tab(tab2);
	return (0);
}
