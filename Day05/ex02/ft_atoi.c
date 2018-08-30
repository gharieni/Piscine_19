/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:18:45 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/20 09:03:36 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	test_neg;
	int	i;
	int	result;

	i = 0;
	test_neg = 1;
	result = 0;
	if (str[0] == '+')
		i++;
	else if (str[0] == '-')
	{
		test_neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	return (test_neg * result);
}
