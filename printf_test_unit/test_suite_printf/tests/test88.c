/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test88.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:12:30 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("apoloaooao\t\32\32\32\32\32\\n1234\b\b\b\b\b");
    } 
    else if (arg == 1) {
        i = ft_printf("apoloaooao\t\32\32\32\32\32\\n1234\b\b\b\b\b");
    }
	printf("%d", i);
    return (0);
}