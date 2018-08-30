/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 09:41:26 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/29 21:53:45 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*ft_strcat(char *s1, const char *s2)
{
	char *ret;

	ret = s1;
	while (*s1)
		s1++;
	ft_strcpy(s1, s2);
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (s1)
		len = ft_strlen(s1) + ft_strlen(s2);
	else
		len = ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
		ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}

int		second_line(int fd, char **buff, char sym[3])
{
	int		count;
	char	*str;
	char	buf[2];

	count = 0;
	while (read(fd, buf, 1) > 0)
	{
		if (buf[0] == '\n')
			return (count);
		else
		{
			if (buf[0] != sym[0] && buf[0] != sym[1])
				return (0);
			str = *buff;
			*buff = ft_strjoin(*buff, buf);
			free(str);
			count++;
		}
	}
	return (count);
}

int		first_line(int fd, char **buff, char sym[3], int *length)
{
	int		count;
	char	buf[2];
	int		reach_first;

	count = 0;
	reach_first = 0;
	while (read(fd, buf, 1) > 0)
		if (buf[0] == '\n')
		{
			if (count != 3 || !check_sym(sym))
				return (0);
			return (second_line(fd, buff, sym));
		}
		else if (!count)
			if (buf[0] >= '0' && buf[0] <= '9')
				*length = *length * 10 + buf[0] - '0';
			else
				sym[count++] = buf[0];
		else
		{
			if (count == 3)
				return (0);
			sym[count++] = buf[0];
		}
	return (0);
}
