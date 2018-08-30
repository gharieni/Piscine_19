/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 10:40:11 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 10:40:12 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_display_file(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		len;
	int		fl;

	if ((fl = open(file, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fl, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fl);
	return (0);
}
