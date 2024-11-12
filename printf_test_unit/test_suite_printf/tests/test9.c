/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:34:12 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 19:34:17 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);

    if (arg == 0) {
        printf("Escape test: \\ \" ' \n");
    } 
    else if (arg == 1) {
        ft_printf("Escape test: \\ \" ' \n");
    }
    return (0);
}
