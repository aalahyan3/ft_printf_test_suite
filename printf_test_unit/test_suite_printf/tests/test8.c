/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:33:47 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 19:33:51 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);

    if (arg == 0) {
        printf("Line1\nLine2\n\tIndented Line\n");
    } 
    else if (arg == 1) {
        ft_printf("Line1\nLine2\n\tIndented Line\n");
    }
    return (0);
}
