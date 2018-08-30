/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 10:49:08 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/19 18:01:13 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int	i;
	int	a[10];

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (!n)
		ft_putchar('0');
	while (n)
	{
		*(a + i) = n % 10;
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(*(a + i) + 48);
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_tab(int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(tab[i][j]);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}
