/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 21:22:26 by vjovanov          #+#    #+#             */
/*   Updated: 2018/08/26 22:21:56 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	print_form(char *form_type, int x, int y, int *k)
{
	if (*k)
		ft_putstr(" || ");
	ft_putstr("[");
	ft_putstr(form_type);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	*k = 1;
}

int		is_square(char **tab, int x, int y)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (x == y)
	{
		while (tab[i])
		{
			while (tab[i][j])
			{
				if (tab[0][j] == 32 || tab[i][0] == 32 || tab[i][x - 1] == 32
						|| tab[y - 1][j] == 32)
					return (0);
				j++;
			}
			j = 0;
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int		is_rect(char **tab, int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x != y)
	{
		while (tab[i])
		{
			j = 0;
			while (tab[i][j])
			{
				if (tab[0][j] == 32 || tab[i][0] == 32 || tab[i][x - 1] == 32
						|| tab[y - 1][j] == 32)
					return (0);
				j++;
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

void	colle_bonus(char **tab, int x, int y, int *k)
{
	if (is_square(tab, x, y))
	{
		print_form("carre", x, y, k);
		print_form("rectangle", x, y, k);
	}
	if (is_rect(tab, x, y))
		print_form("rectangle", x, y, k);
}
