/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test95.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:35:33 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("javascript is %12.555s in %-10.1d", "The most used Programming Language", 2020 );
    } 
    else if (arg == 1) {
        i = ft_printf("javascript is %12.555s in %-10.1d", "The most used Programming Language", 2020 );
    }
	printf("%d", i);
    return (0);
}