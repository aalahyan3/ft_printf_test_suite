/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test85.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:03:03 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("\t\202qwe");
    } 
    else if (arg == 1) {
        i = ft_printf("\t\202qwe");
    }
	printf("%d", i);
    return (0);
}
