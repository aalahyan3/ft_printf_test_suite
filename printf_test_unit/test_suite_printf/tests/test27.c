/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test27.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:49:37 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 20:57:58 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    char str[20] = "A regular string";

    if (arg == 0) {
        printf("this is a %s", str);
    } 
    else if (arg == 1) {
        ft_printf("this is a %s", str);
    }
    return (0);
}