/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kaizen <axwellwork@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:38:07 by Kaizen            #+#    #+#             */
/*   Updated: 2023/05/04 22:38:07 by Kaizen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;

    if (argc == 1)
        write(1, "\0", 1);
    else if(argc >= 2)
    {
        while(argv[1][i])
            write(1, &argv[1][i++], 1);
            write(1, "\n", 1);
    }

    return 0;
}