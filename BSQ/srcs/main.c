/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 08:19:13 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/29 21:59:40 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_tab(char **tab)
{
	int i;

	i = -1;
	if (tab == NULL)
		return ;
	while (tab[++i])
	{
		free(tab[i]);
		tab[i] = NULL;
	}
	free(tab);
}

int		check_sym(char *sym)
{
	if (sym[0] && sym[1] && sym[2])
	{
		if (sym[0] != sym[1] && sym[1] != sym[2] && sym[0] != sym[2])
			return (1);
	}
	return (0);
}

int		check_line(char *str, int length, char *sym)
{
	int count;

	count = -1;
	while (str[++count])
		if (str[count] != sym[0] && str[count] != sym[1])
			return (0);
	if (count != length)
		return (0);
	return (1);
}

char	**fill(int fd, char *sym, int length)
{
	char	**tab;
	char	*buff;
	int		length_line;
	int		count;

	if ((fd == -1) || ((buff = NULL) && 0))
		return (NULL);
	length_line = first_line(fd, &buff, sym, &length);
	if (!length_line || !length)
		return (free_buf(NULL, buff, fd, 0));
	tab = (char **)malloc(sizeof(char *) * (length + 1));
	count = 0;
	tab[count++] = buff;
	buff = (char *)malloc(sizeof(char) * (length_line + 1));
	while (read(fd, buff, length_line + 1) > 0)
		if (((buff[length_line] != '\n') || ((buff[length_line] = '\0') && 0))
	|| ((!check_line(buff, length_line, sym)) || ((tab[count++] = buff) && 0)))
			return (free_buf(tab, buff, fd, count));
		else
			buff = (char *)malloc(sizeof(char) * (length_line + 1));
	if (count != length)
		return (free_buf(tab, buff, fd, count));
	free_buf2(tab, buff, fd, count);
	return (tab);
}

int		main(int ac, char **av)
{
	int		count;
	char	**current_tab;
	char	sym[4];

	count = -1;
	while (++count < ac)
	{
		count = (!count) ? count + 1 : count;
		current_tab = (ac == 1) ? fill(IN, sym, 0) :
			fill(open(av[count], O_RDONLY), sym, 0);
		if (current_tab == NULL)
		{
			print_error(count);
			continue;
		}
		if (bsq(current_tab, sym))
			print_solution(current_tab, count);
		else
			print_error(count);
		free_tab(current_tab);
	}
	return (0);
}
