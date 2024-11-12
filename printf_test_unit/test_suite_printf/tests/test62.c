/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test52.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/02 18:04:36 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    int	 x = 0;

    if (arg == 0) {
        printf("%x", x);
    } 
    else if (arg == 1) {
        ft_printf("%x", x);
    }
    return (0);
}
