/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test32.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:49:37 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 21:42:16 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    int	 x = INT_MAX;

    if (arg == 0) {
        printf("%d", x);
    } 
    else if (arg == 1) {
        ft_printf("%d", x);
    }
    return (0);
}
