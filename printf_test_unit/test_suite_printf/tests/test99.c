/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test99.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:49:35 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 23:10:49 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("zero padded int be like %0100d for hex %-0100x, for unsigned %-030u\n for X %-022X", 1337, 1337, 1337, 1337);
    } 
    else if (arg == 1) {
        i = ft_printf("zero padded int be like %0100d for hex %-0100x, for unsigned %-030u\n for X %-022X", 1337, 1337, 1337, 1337);
    }
	printf("%d", i);
    return (0);
}