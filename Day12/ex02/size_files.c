/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:42:17 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 10:42:18 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_files(char *file)
{
	int		fl;
	char	buf[2];
	int		size;

	size = 0;
	fl = open(file, O_RDONLY);
	while (read(fl, buf, 1))
		size++;
	close(fl);
	return (size);
}
