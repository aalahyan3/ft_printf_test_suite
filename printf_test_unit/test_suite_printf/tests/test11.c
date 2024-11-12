/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:46:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 19:47:01 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    char ch = 'A';

    if (arg == 0) {
        printf("%c\n", ch);
    } 
    else if (arg == 1) {
        ft_printf("%c\n", ch);
    }
    return (0);
}
