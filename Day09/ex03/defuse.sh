# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 14:01:24 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/17 14:01:26 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
touch -r "bomb.txt" -A '-000001' "bomb.txt" && stat -r bomb.txt | cut -d ' ' -f9
