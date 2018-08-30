/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 21:02:23 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/26 22:31:25 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../rush.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *ret;

	ret = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, s2);
	return (ret);
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

int		ft_arraycmp(char **s1, char **s2)
{
	unsigned int	i;

	i = -1;
	while (s1[++i])
	{
		if (ft_strcmp(s1[i], s2[i]) != 0)
			return (0);
	}
	return (1);
}
