/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test75.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 20:21:00 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    char *ptr = (void *)UINT64_MAX;

    if (arg == 0) {
        printf("%p\n\n\n\n", ptr);
    } 
    else if (arg == 1) {
        ft_printf("%p\n\n\n", ptr);
    }
    return (0);
}
