/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 12:15:12 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/29 12:15:13 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int		count;

	count = 0;
	if (root == NULL)
		return (0);
	if (btree_level_count(root->left) > btree_level_count(root->right))
		return (count + 1 + btree_level_count(root->left));
	if (btree_level_count(root->left) <= btree_level_count(root->right))
		return (count + 1 + btree_level_count(root->right));
	return (1);
}
