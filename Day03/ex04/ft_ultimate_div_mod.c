/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:15:48 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/10 11:16:09 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer_a;
	int	buffer_b;

	buffer_a = *a;
	buffer_b = *b;
	*a = buffer_a / buffer_b;
	*b = buffer_a % buffer_b;
}
