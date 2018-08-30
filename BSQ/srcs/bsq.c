/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 16:37:36 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/29 21:44:36 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_error(int count)
{
	if (count != 1)
		write(1, "\n", 1);
	write(2, "map error\n", 10);
}

void	print_solution(char **tab, int ac)
{
	int		y;
	int		length;

	if (ac > 1)
		write(1, "\n", 1);
	y = -1;
	length = ft_strlen(tab[0]);
	while (tab[++y])
	{
		write(1, tab[y], length);
		write(1, "\n", 1);
	}
}

int		check_single_case(char **tab, int t[2], int sol, char sym)
{
	int		count_x;
	int		count_y;

	count_y = t[1];
	while (tab[count_y] && count_y < t[1] + sol)
	{
		count_x = t[0];
		while (tab[count_y][count_x] && count_x < t[0] + sol)
		{
			if (tab[count_y][count_x] == sym)
				return (count_x);
			count_x++;
		}
		if (count_x != t[0] + sol)
			return (-1);
		count_y++;
	}
	if (count_y < t[1] + sol)
		return (-2);
	return (-3);
}

int		replace_in_tab(char **tab, int sol[3], char sym)
{
	int		count_x;
	int		count_y;

	count_y = sol[2];
	while (count_y < sol[2] + sol[0])
	{
		count_x = sol[1];
		while (count_x < sol[1] + sol[0])
		{
			tab[count_y][count_x] = sym;
			count_x++;
		}
		count_y++;
	}
	return (1);
}

int		bsq(char **tab, char *sym)
{
	int		t[2];
	int		sol[3];
	int		result;

	sol[0] = 0;
	t[1] = -1;
	while (tab[++t[1]] && ((t[0] = -1) || 1))
		while (tab[t[1]][++t[0]])
		{
			result = check_single_case(tab, t, sol[0] + 1, sym[1]);
			if (result == -3)
			{
				sol[0]++;
				sol[1] = t[0]--;
				sol[2] = t[1];
			}
			else if (result == -1 && (t[1]++ || 1))
				t[0] = -1;
			else if (result == -2)
				return (replace_in_tab(tab, sol, sym[2]));
			else
				t[0] = result;
		}
	return (1);
}
