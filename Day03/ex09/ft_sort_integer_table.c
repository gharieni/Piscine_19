/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:19:23 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/12 21:35:32 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	buffer;
	int	i;
	int	j;
	int	loc_min;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		loc_min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[loc_min] > tab[j])
				loc_min = j;
			j++;
		}
		buffer = tab[i];
		tab[i] = tab[loc_min];
		tab[loc_min] = buffer;
		i++;
	}
}
