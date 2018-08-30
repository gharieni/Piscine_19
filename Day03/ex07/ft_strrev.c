/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:17:51 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/10 11:18:29 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strrev(char *str)
{
	char	buffer;
	int		i;
	int		length;

	length = ft_strlen(str);
	i = 0;
	while (i < length)
	{
		buffer = str[i];
		str[i] = str[length - 1];
		str[length - 1] = buffer;
		i++;
		length--;
	}
	return (str);
}
