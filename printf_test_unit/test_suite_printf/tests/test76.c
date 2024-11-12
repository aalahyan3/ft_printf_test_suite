/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test76.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 20:25:05 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    void	*ptr = (void *)(ULONG_MAX);

    if (arg == 0) {
        printf("%p", ptr);
    } 
    else if (arg == 1) {
        ft_printf("%p", ptr);
    }
    return (0);
}
