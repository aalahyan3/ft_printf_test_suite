/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test40.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:49:37 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/02 16:28:11 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	char a = 'U';

    if (arg == 0) {
        printf("%d", a);
    } 
    else if (arg == 1) {
        ft_printf("%d", a);
    }
    return (0);
}