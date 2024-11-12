/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test91.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:29:19 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("this char has fwd of %10.7d and %10s alignment: %-120c\n", 123, "left", 'A');
    } 
    else if (arg == 1) {
        i = ft_printf("this char has fwd of %10.7d and %10s alignment: %-120c\n", 123, "left", 'A');
    }
	printf("%d", i);
    return (0);
}
