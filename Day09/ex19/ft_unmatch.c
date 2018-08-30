/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:39:20 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/17 13:39:22 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int	index;
	int	i;

	index = 0;
	while (index < length)
	{
		i = 0;
		while ((tab[index] != tab[i] || i == index) && i < length)
			i++;
		if (tab[index] != tab[i])
			return (tab[index]);
		++index;
	}
	return (0);
}
