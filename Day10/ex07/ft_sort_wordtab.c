/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 09:42:41 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/24 09:42:43 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (s1[length] != '\0')
		length++;
	while (i <= length)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*buffer;

	i = 1;
	buffer = 0;
	if (tab[0] != 0)
	{
		while (tab[i] != 0)
		{
			if (ft_strcmp(tab[i - 1], tab[i]) > 0)
			{
				buffer = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = buffer;
				i = 0;
			}
			i++;
		}
	}
}
