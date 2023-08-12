# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 23:52:42 by abmouhou          #+#    #+#              #
#    Updated: 2023/08/11 23:52:43 by abmouhou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat /etc/passwd | grep -v "#" | awk "NR%2==0" | awk -F: '{print $1}' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | xargs -I{} echo -n {}