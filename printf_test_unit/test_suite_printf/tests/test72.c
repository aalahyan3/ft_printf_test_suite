/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test72.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 20:18:25 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    int	 x[3] = {1, 22, 2};

	char *s = malloc(1);
	s = (void *)0x03;

    if (arg == 0) {
        printf("%p", s);
    } 
    else if (arg == 1) {
        ft_printf("%p", s);
    }
    return (0);
}
