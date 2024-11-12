/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test41.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:32:03 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/02 16:45:56 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);

    if (arg == 0) {
        printf("%i", INT_MAX);
    } 
    else if (arg == 1) {
        ft_printf("%i", INT_MAX);
    }
    return (0);
}