/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:50:59 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 22:22:01 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

void	print_coll(int r, int x, int y, int *k)
{
	if (*k)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(r);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	*k = 1;
}

void	free_tab(char **tab)
{
	int i;

	i = 0;
	if (tab == NULL)
		return ;
	while (tab[i])
		free(tab[i++]);
	if (tab)
		free(tab);
	tab = NULL;
}

void	colle(char **tab, int x, int y, int i)
{
	char	**tab2;

	tab2 = NULL;
	tab2 = rush00(x, y);
	if (ft_arraycmp(tab, tab2))
		print_coll(0, x, y, &i);
	free_tab(tab2);
	tab2 = rush01(x, y);
	if (ft_arraycmp(tab, tab2))
		print_coll(1, x, y, &i);
	free_tab(tab2);
	tab2 = rush02(x, y);
	if (ft_arraycmp(tab, tab2))
		print_coll(2, x, y, &i);
	free_tab(tab2);
	tab2 = rush03(x, y);
	if (ft_arraycmp(tab, tab2))
		print_coll(3, x, y, &i);
	free_tab(tab2);
	tab2 = rush04(x, y);
	if (ft_arraycmp(tab, tab2))
		print_coll(4, x, y, &i);
	free_tab(tab2);
	colle_bonus(tab, x, y, &i);
	(i == 0) ? ft_putstr("aucune") : ft_putstr("\n");
}

void	buf_to_tab(char *buff, char **tab, int i, int j)
{
	int		t;
	int		k;

	if (i * j)
		k = 0;
	tab = ft_split(buff, "\n", &k, &t);
	colle(tab, k, t, 0);
	free_tab(tab);
}

int		main(void)
{
	char	**tab;
	char	*buff;
	char	buf[2];
	char	*str;

	tab = NULL;
	buff = NULL;
	while (read(0, buf, 1) != '\0')
	{
		str = buff;
		buff = ft_strjoin(buff, buf);
		free(str);
		str = NULL;
	}
	if (buff == NULL)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	buf_to_tab(buff, tab, 0, 0);
	return (0);
}
