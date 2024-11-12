/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test107.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:49:35 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/10 00:31:45 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("%#-+012p", (void *)0x1337539);
    } 
    else if (arg == 1) {
        i = ft_printf("%#-+012p", (void *)0x1337539);
    }
	printf("%d", i);
    return (0);
}