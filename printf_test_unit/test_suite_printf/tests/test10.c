/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:35:24 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 19:36:21 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);

    if (arg == 0) {
        printf("This is a test string with\n numbers 12345 and symbols @#$.\n");
    } 
    else if (arg == 1) {
        ft_printf("This is a test string with\n numbers 12345 and symbols @#$.\n");
    }
    return (0);
}
