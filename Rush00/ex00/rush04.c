/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfalesse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:47:31 by nfalesse          #+#    #+#             */
/*   Updated: 2018/08/12 19:47:34 by nfalesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int i, int j, int x, int y)
{
	if (j == 0 || j == y - 1)
		if (i == 0 || i == x - 1)
		{
			if ((!j && !i) || (j == y - 1 && i == x - 1 && x != 1 && y != 1))
				ft_putchar('A');
			else if ((j == y - 1 && i == 0) || (j == 0 && i == x - 1))
				ft_putchar('C');
		}
		else
			ft_putchar('B');
	else
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			check(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
