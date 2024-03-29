/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:43:34 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 10:43:35 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			g_add;
int			g_end;
static int	g_i;
static char	g_tmp[17];
int			g_total_size;

static void	print_after(void)
{
	g_tmp[g_i] = '\0';
	g_i = ft_strlen(g_tmp);
	if (g_i > 0)
	{
		while (g_i++ <= 15)
			ft_putstr("   ");
	}
}

void		hex_print(char txt)
{
	int		i;
	char	*tmp;

	ft_putstr(" ");
	tmp = ft_convert_base(txt, BASE, HEX);
	i = 2 - ft_strlen(tmp);
	while (i--)
		ft_putchar('0');
	ft_putstr(tmp);
	g_tmp[g_i++] = txt;
	if (g_i == 16)
		g_i = 0;
	if (g_total_size - g_add == 1 && g_end == 1)
		print_after();
}
