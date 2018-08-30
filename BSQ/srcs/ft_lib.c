/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 09:49:02 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/29 21:58:39 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	*free_buf(char **tab, char *buff, int fd, int count)
{
	if (count)
		tab[count] = NULL;
	free(buff);
	buff = NULL;
	free_tab(tab);
	if (fd != -1)
		close(fd);
	return (NULL);
}

void	*free_buf2(char **tab, char *buff, int fd, int count)
{
	if (count)
		tab[count] = NULL;
	free(buff);
	buff = NULL;
	if (fd != -1)
		close(fd);
	return (NULL);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	if (src && *src)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(const char *str)
{
	int size;

	size = 0;
	while (str && *str != '\0')
	{
		size++;
		str = str + 1;
	}
	return (size);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] == '\0' && s2[i] != '\0')
		return (s2[i] * -1);
	if (s2[i] == '\0' && s1[i] != '\0')
		return (s1[i]);
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] == s2[i])
			i++;
	}
	return (0);
}
