/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 11:52:43 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/21 10:07:33 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_src;
	unsigned int	length_dest;
	unsigned int	i;
	unsigned int	j;

	length_src = ft_strlen(src);
	length_dest = ft_strlen(dest);
	i = length_dest;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (length_dest > size)
		return (length_src + size);
	else
		return (length_dest + length_src);
}
