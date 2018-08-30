/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporphyr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:03:24 by fporphyr          #+#    #+#             */
/*   Updated: 2018/08/26 22:29:31 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include "rush.h"
# include <unistd.h>
# include <stdlib.h>

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strlen(const char *str);
void	print_form(char *form_type, int x, int y, int *k);
void	colle_bonus(char **tab, int x, int y, int *k);
char	**ft_split(char *str, char *charset, int *x, int *y);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_arraycmp(char **s1, char **s2);
char	**rush00(int x, int y);
char	**rush01(int x, int y);
char	**rush02(int x, int y);
char	**rush03(int x, int y);
char	**rush04(int x, int y);
#endif
