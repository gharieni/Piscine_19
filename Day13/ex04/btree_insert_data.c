/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 15:13:43 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/29 15:13:44 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else
	{
		if ((*cmpf)((*root)->item, item) <= 0)
		{
			if ((*root)->right)
				btree_insert_data(&((*root)->right), item, cmpf);
			else
				(*root)->right = btree_create_node(item);
		}
		else
		{
			if ((*root)->left)
				btree_insert_data(&((*root)->left), item, cmpf);
			else
				(*root)->left = btree_create_node(item);
		}
	}
}
