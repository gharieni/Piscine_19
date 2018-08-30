/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 09:05:29 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 09:05:30 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*last;
	t_list	*curr;
	t_list	*temp;

	last = NULL;
	curr = *begin_list;
	temp = NULL;
	while (curr)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (curr == *begin_list)
				*begin_list = curr->next;
			else
				last->next = curr->next;
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		else
		{
			last = curr;
			curr = curr->next;
		}
	}
}
