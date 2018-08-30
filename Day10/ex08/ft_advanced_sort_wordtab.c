/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 09:44:08 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/24 09:44:09 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*f)(char *, char *))
{
	int		i;
	char	*buffer;

	i = 1;
	buffer = 0;
	if (tab[0] != 0)
	{
		while (tab[i] != 0)
		{
			if (f(tab[i - 1], tab[i]) > 0)
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
