/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test110.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:49:35 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/10 00:34:37 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("%#-+0 12.122s and %+010+10.12d", "string__", 12);
    } 
    else if (arg == 1) {
        i = ft_printf("%#-+0 12.122s and %+010+10.12d", "string__", 12);
    }
	printf("%d", i);
    return (0);
}