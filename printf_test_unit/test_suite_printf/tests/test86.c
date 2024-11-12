/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test86.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 22:09:17 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("%d%i%x%s\n%c%c%c%c%c", 13,37,1337,"hello", 65, 66, 67, 68, 69);
    } 
    else if (arg == 1) {
        i = ft_printf("%d%i%x%s\n%c%c%c%c%c", 13,37,1337,"hello", 65, 66, 67, 68, 69);
    }
	printf("%d", i);
    return (0);
}
