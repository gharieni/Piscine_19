/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:13:10 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/21 12:14:37 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_hex(int i, unsigned int size, unsigned char *p)
{
	char			*str;
	unsigned int	j;

	j = 0;
	str = "0123456789abcdef";
	while (j < 16 && i + j < size)
	{
		ft_putchar((char)str[(*(p + i + j) / 16) % 16]);
		ft_putchar((char)str[*(p + i + j) % 16]);
		if (j % 2)
			ft_putchar(' ');
		j += 1;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j += 1;
	}
}

void	ft_putnbr_base(int nb, int i)
{
	unsigned int	nbr;
	char			*base;

	base = "0123456789abcdef";
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 16)
		ft_putnbr_base(nbr / 16, ++i);
	if (i == 1)
		ft_putchar('0');
	ft_putchar(base[nbr % 16]);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	display_new_line(unsigned int line_count)
{
	unsigned int k;

	k = (line_count == 0 ? 1 : line_count);
	while ((k *= 10) < 10000000)
		ft_putchar('0');
	ft_putnbr(line_count * 10);
	if (line_count == 0)
		ft_putchar('0');
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned char	*p;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	i = 0;
	k = -1;
	while (i < size)
	{
		display_new_line(++k);
		print_hex(i, size, p);
		j = -1;
		while (++j < 16 && i + j < size)
		{
			if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
				ft_putchar((char)*(p + i + j));
			else
				ft_putchar('.');
		}
		ft_putchar('\n');
		i += 16;
	}
}
