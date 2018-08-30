/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:57:11 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/19 18:01:21 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

# define IS_DIGIT(x) ((x >= '1' && x <= '9') || x == '.')

int		verif(int **tab);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_strlen(char *str);
void	print_tab(int **tab);
void	error(void);
void	free_tab(int **tab);
int		verif_one_cell(int **tab, int row, int cloumn);

#endif
