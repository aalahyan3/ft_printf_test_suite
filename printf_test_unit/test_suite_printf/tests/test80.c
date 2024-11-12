/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test80.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:31:39 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 20:32:13 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"


int main(int ac, char *av[])
{
    int arg = atoi(av[1]);

    if (arg == 0) {
        printf("%p", NULL);
    } 
    else if (arg == 1) {
        ft_printf("%p", NULL);
    }
    return (0);
}