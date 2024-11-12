/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test87.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:15:11 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("123123%x%u%s%i%s%X%%%%", 123, 999999999, "striiiiiiiiiiing", 0x13f, "\0dddd", 1337);
    } 
    else if (arg == 1) {
        i = ft_printf("123123%x%u%s%i%s%X%%%%", 123, 999999999, "striiiiiiiiiiing", 0x13f, "\0dddd", 1337);
    }
	printf("%d", i);
    return (0);
}