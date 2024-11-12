/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test79.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:27:59 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 20:31:01 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    int	i = 12;
	int *ptr = (void *)0x1fef12;
	ptr = i;

    if (arg == 0) {
        printf("%p", ptr);
    } 
    else if (arg == 1) {
        ft_printf("%p", ptr);
    }
    return (0);
}