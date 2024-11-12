/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test53.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/02 18:05:32 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    int	 x = 1337;

    if (arg == 0) {
        printf("This is in Hex Upper %x", x);
    } 
    else if (arg == 1) {
        ft_printf("This is in Hex Upper %x", x);
    }
    return (0);
}
