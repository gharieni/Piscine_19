/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvromman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:53:29 by hvromman          #+#    #+#             */
/*   Updated: 2018/08/29 23:06:24 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		check_sym(char *sym);
int		second_line(int fd, char **buff, char sym[3]);
int		first_line(int fd, char **buff, char sym[3], int *length);
void	*free_buf(char **tab, char *buff, int fd, int count);
void	*free_buf2(char **tab, char *buff, int fd, int count);
void	free_tab(char **tab);
void	print_solution(char **current_tab, int ac);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
int		ft_putchar(char c);
int		ft_strlen(const char *str);
void	print_error(int count);
int		bsq(char **tab, char *sym);

# define IN 0

#endif
