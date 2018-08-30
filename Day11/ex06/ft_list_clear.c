/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 09:04:15 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 09:04:16 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*temp;

	elem = *begin_list;
	if (!elem)
		return ;
	while (elem)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	*begin_list = 0;
}
