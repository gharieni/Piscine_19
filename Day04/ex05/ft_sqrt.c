/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:16:21 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/14 10:16:25 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long	i;

	i = 0;
	while (i * i != nb && i * i < nb)
		i++;
	if (i * i != nb)
		return (0);
	else
		return (i);
}