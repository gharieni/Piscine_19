/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:56:23 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/12 20:03:03 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	door(int *i, int *width, int space, int s_door)
{
	int	key;

	key = s_door / 2;
	if ((space == key) && (*width == (s_door / 2) - 1) && (s_door > 3))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i = *i + 1;
	*width = *width + 1;
}

int		write_line(int line_nb, int space, int size_door)
{
	int	i;
	int	z;
	int	width;

	width = -size_door / 2;
	z = 0;
	i = 0;
	while (i++ < space)
		ft_putchar(' ');
	ft_putchar('/');
	i = 0;
	while (i <= line_nb * 2)
	{
		while ((i == line_nb + width) && (space < size_door)
				&& (width <= size_door / 2))
			door(&i, &width, space, size_door);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (space - 1);
}

void	pyramid(int space, int nb, int line, int size_door)
{
	int	i;
	int	condition_inc_nb;
	int	var_jump;

	i = 0;
	var_jump = 4;
	condition_inc_nb = 1;
	while (space + 1)
	{
		if (i == line)
		{
			i += nb;
			space -= nb;
			line = i + var_jump;
			var_jump++;
			if (condition_inc_nb == 2 && nb++)
				condition_inc_nb = 0;
			condition_inc_nb++;
		}
		space = write_line(i++, space, size_door);
	}
}

void	sastantua(int size)
{
	int	line;
	int	nb;
	int	i;
	int	z;
	int	space;

	i = 1;
	z = 0;
	nb = 2;
	line = 3;
	if (size > 0)
	{
		while (i <= size)
		{
			space = space + 6 + z;
			z = z + (i > 1);
			if ((i > 1) && (i % 2))
				z++;
			i++;
		}
		if (!(size % 2))
			size--;
		pyramid(space - 4, nb, line, size);
	}
}
