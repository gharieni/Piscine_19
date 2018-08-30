/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 09:40:54 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/24 10:32:04 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*result;

	result = (int*)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		result[i] = f(tab[i]);
	return (result);
}
