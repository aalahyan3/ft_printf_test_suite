/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:49:35 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 23:09:30 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("%-010.2s %-010d, %-010x %-010u", "abcdeffff", 2, 3, 4);
    } 
    else if (arg == 1) {
        i = ft_printf("%-010.2s %-010d, %-010x %-010u", "abcdeffff", 2, 3, 4);
    }
	printf("%d", i);
    return (0);
}