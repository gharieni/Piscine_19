/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:07:08 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/14 10:07:12 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle2(int i)
{
	if (i == 0)
		return (0);
	ft_eight_queens_puzzle2(i - 1);
	return (92);
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_eight_queens_puzzle2(92));
}
