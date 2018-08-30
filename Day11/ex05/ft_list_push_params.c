/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 09:11:12 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 09:11:13 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*new_list;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		new_list = ft_create_elem(data);
		new_list->next = *begin_list;
		*begin_list = new_list;
	}
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;

	begin_list = 0;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&begin_list, av[i]);
		i++;
	}
	return (begin_list);
}
