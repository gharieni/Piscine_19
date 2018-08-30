/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 13:06:51 by vjovanov          #+#    #+#             */
/*   Updated: 2018/08/26 21:11:35 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**rush00(int x, int y)
{
	int		a;
	int		b;
	char	**tab;

	b = -1;
	tab = (char**)malloc(sizeof(char*) * (y + 1));
	tab[y] = NULL;
	while (++b < y)
		tab[b] = (char*)malloc(sizeof(char) * (x + 1));
	b = 0;
	while (y >= ++b && ((a = 0) || 1))
		while (x >= ++a)
			if ((a == 1 && b == 1) || (x == a && b == 1)
					|| (a == 1 && y == b) || (x == a && y == b))
				tab[b - 1][a - 1] = 'o';
			else if ((b == 1 && a != 1 && a != x)
					|| (b == y && a != 1 && a != x))
				tab[b - 1][a - 1] = '-';
			else if ((a == 1 && b != 1 && b != y)
					|| (a == x && b != 1 && b != y))
				tab[b - 1][a - 1] = '|';
			else
				tab[b - 1][a - 1] = ' ';
	return (tab);
}

char	**rush01(int x, int y)
{
	int		a;
	int		b;
	char	**tab;

	b = -1;
	tab = (char**)malloc(sizeof(char*) * (y + 1));
	tab[y] = NULL;
	while (++b < y)
		tab[b] = (char*)malloc(sizeof(char) * (x + 1));
	b = 0;
	while (y >= ++b && ((a = 0) || 1))
		while (x >= ++a)
			if ((a == 1 && b == 1) || (a == x && b == y))
				tab[b - 1][a - 1] = '/';
			else if ((b == y && a == 1) || (x == a && b == 1))
				tab[b - 1][a - 1] = '\\';
			else if ((b == 1 && a != 1 && a != x)
					|| (b == y && a != 1 && a != x))
				tab[b - 1][a - 1] = '*';
			else if ((a == 1 && b != 1 && b != y)
					|| (a == x && b != 1 && b != y))
				tab[b - 1][a - 1] = '*';
			else
				tab[b - 1][a - 1] = ' ';
	return (tab);
}

char	**rush02(int x, int y)
{
	int		a;
	int		b;
	char	**tab;

	b = -1;
	tab = (char**)malloc(sizeof(char*) * (y + 1));
	tab[y] = NULL;
	while (++b < y)
		tab[b] = (char*)malloc(sizeof(char) * (x + 1));
	b = 0;
	while (y >= ++b && ((a = 0) || 1))
		while (x >= ++a)
			if ((a == 1 && b == 1) || (a == x && b == 1))
				tab[b - 1][a - 1] = 'A';
			else if ((b == y && a == 1) || (x == a && b == y))
				tab[b - 1][a - 1] = 'C';
			else if ((b == 1 && a != 1 && a != x)
					|| (b == y && a != 1 && a != x))
				tab[b - 1][a - 1] = 'B';
			else if ((a == 1 && b != 1 && b != y)
					|| (a == x && b != 1 && b != y))
				tab[b - 1][a - 1] = 'B';
			else
				tab[b - 1][a - 1] = ' ';
	return (tab);
}

char	**rush03(int x, int y)
{
	int		a;
	int		b;
	char	**tab;

	b = -1;
	tab = (char**)malloc(sizeof(char*) * (y + 1));
	tab[y] = NULL;
	while (++b < y)
		tab[b] = (char*)malloc(sizeof(char) * (x + 1));
	b = 0;
	while (y >= ++b && ((a = 0) || 1))
		while (x >= ++a)
			if ((a == 1 && b == 1) || (a == 1 && b == y))
				tab[b - 1][a - 1] = 'A';
			else if ((b == 1 && a == x) || (x == a && b == y))
				tab[b - 1][a - 1] = 'C';
			else if ((b == 1 && a != 1 && a != x)
					|| (b == y && a != 1 && a != x))
				tab[b - 1][a - 1] = 'B';
			else if ((a == 1 && b != 1 && b != y)
					|| (a == x && b != 1 && b != y))
				tab[b - 1][a - 1] = 'B';
			else
				tab[b - 1][a - 1] = ' ';
	return (tab);
}

char	**rush04(int x, int y)
{
	int		a;
	int		b;
	char	**tab;

	b = -1;
	tab = (char**)malloc(sizeof(char*) * (y + 1));
	tab[y] = NULL;
	while (++b < y)
		tab[b] = (char*)malloc(sizeof(char) * (x + 1));
	b = 0;
	while (y >= ++b && ((a = 0) || 1))
		while (x >= ++a)
			if ((a == 1 && b == 1) || (a == x && b == y))
				tab[b - 1][a - 1] = 'A';
			else if ((b == y && a == 1) || (x == a && b == 1))
				tab[b - 1][a - 1] = 'C';
			else if ((b == 1 && a != 1 && a != x)
					|| (b == y && a != 1 && a != x))
				tab[b - 1][a - 1] = 'B';
			else if ((a == 1 && b != 1 && b != y)
					|| (a == x && b != 1 && b != y))
				tab[b - 1][a - 1] = 'B';
			else
				tab[b - 1][a - 1] = ' ';
	return (tab);
}
