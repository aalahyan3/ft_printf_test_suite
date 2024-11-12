/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test92.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:30:46 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("%100.3s", "hello from 1337 school, today is sat, Nov 19th");
    } 
    else if (arg == 1) {
        i = ft_printf("%100.3s", "hello from 1337 school, today is sat, Nov 19th");
    }
	printf("%d", i);
    return (0);
}
