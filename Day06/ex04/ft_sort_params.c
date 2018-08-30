/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:52:52 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/15 16:19:04 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (i <= ft_strlen(s1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_display_argv(char **argv, int argc)
{
	int		i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*buffer;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			buffer = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = buffer;
			i = 1;
		}
		else
			i++;
	}
	ft_display_argv(argv, argc);
}
