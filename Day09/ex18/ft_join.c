/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:38:39 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/17 13:39:08 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(char **tab)
{
	int	index;
	int	i;
	int	characters_count;

	index = 0;
	characters_count = 0;
	while (tab[index])
	{
		i = 0;
		while (tab[index][i])
		{
			i++;
			characters_count++;
		}
		index++;
		characters_count++;
	}
	return (characters_count);
}

char	*ft_join(char **tab, char *sep)
{
	char	*string;
	char	characters_count;
	int		index;
	int		i;
	int		o;

	characters_count = ft_count(tab);
	if (!(string = malloc(characters_count * sizeof(char))))
		return (0);
	index = 0;
	o = 0;
	while (tab[index])
	{
		i = 0;
		while (tab[index][i])
			string[o++] = tab[index][i++];
		i = 0;
		while (sep[i] && o + 1 < characters_count)
			string[o++] = sep[i++];
		++index;
	}
	string[o] = '\0';
	return (string);
}
