# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 23:51:45 by abmouhou          #+#    #+#              #
#    Updated: 2023/08/11 23:51:46 by abmouhou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

ifconfig -a | grep ether | awk '{print $2}'

# ifconfig | awk '/ether/ {print $2}'
# ✗ ifconfig -a | grep ether | cut -d ' ' -f 2