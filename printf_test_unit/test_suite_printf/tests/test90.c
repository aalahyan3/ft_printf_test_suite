/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test90.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:14:00 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("--____\0ddddddd");
    } 
    else if (arg == 1) {
        i = ft_printf("--____\0ddddddd");
    }
	printf("%d", i);
    return (0);
}