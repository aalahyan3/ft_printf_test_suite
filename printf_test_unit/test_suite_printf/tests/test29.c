/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test29.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:49:37 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 21:02:39 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    char str[30] = "LOOOOOOL~!!!!!!!!!!!!!!!!!!";

    if (arg == 0) {
        printf("%s and %s", str, str);
    } 
    else if (arg == 1) {
        ft_printf("%s and %s", str, str);
    }
    return (0);
}