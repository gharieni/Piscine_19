/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:51:40 by ghamelek          #+#    #+#             */
/*   Updated: 2018/08/17 13:51:50 by ghamelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# define PUNCH "punch"
# define KICK "kick"
# define HEADBUTT "headbutt"
# include "ft_perso.h"

void	ft_fight(t_perso *attacker, t_perso *defense, char *attack);

#endif
