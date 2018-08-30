/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 09:25:14 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/14 10:21:05 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_available(int tab[8][8], int row, int col)
{
	int i;

	i = 0;
	while (++i <= row)
		if (tab[row - i][col] == 1)
			return (0);
	i = 0;
	while ((++i <= row) && (i <= col))
		if (tab[row - i][col - i] == 1)
			return (0);
	i = -1;
	while (((row + ++i) < 8) && ((col - i) >= 0))
		if (tab[row + i][col - i] == 1)
			return (0);
	i = 0;
	while (((row - ++i) >= 0) && ((col + i) < 8))
		if (tab[row - i][col + i] == 1)
			return (0);
	return (1);
}

void	ft_print_solution(int tab[8][8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = -1;
		while (j < 8)
			if (tab[i][++j] == 1)
				ft_putchar(j + '1');
		i++;
	}
	ft_putchar('\n');
}

int		ft_put_queen(int tab[8][8], int row, int *solution)
{
	int i;

	if (row == 8)
		return (1);
	i = 0;
	while (i < 8)
	{
		if (ft_is_available(tab, row, i))
		{
			tab[row][i] = 1;
			if (ft_put_queen(tab, row + 1, solution) == 1)
			{
				ft_print_solution(tab);
				*solution = *solution + 1;
			}
			tab[row][i] = 0;
		}
		i++;
	}
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int tab[8][8];
	int i;
	int j;
	int solution;

	i = -1;
	solution = 0;
	while (++i < 8)
	{
		j = 0;
		while (j < 8)
		{
			tab[i][j] = 0;
			j++;
		}
	}
	ft_put_queen(tab, 0, &solution);
}
