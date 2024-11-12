/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test97.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:48:52 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("data %-40u in this adress %-22.10x", UINT16_MAX, INT_MAX);
    } 
    else if (arg == 1) {
        i = ft_printf("data %-40u in this adress %-22.10x", UINT16_MAX, INT_MAX);
    }
	printf("%d", i);
    return (0);
}