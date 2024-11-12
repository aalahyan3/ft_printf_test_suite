/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test57.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/02 18:07:45 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    int	 x = INT_MAX;

    if (arg == 0) {
        printf("%X", x);
    } 
    else if (arg == 1) {
        ft_printf("%X", x);
    }
    return (0);
}