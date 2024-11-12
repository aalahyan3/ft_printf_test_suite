/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test71.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:03:30 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 20:12:38 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
    char *s = malloc(1);

	void *ptr= (void *)0x121212;
    if (arg == 0) {
        printf("%p", ptr);
    } 
    else if (arg == 1) {
        ft_printf("%p", ptr);
    }
	free(s);
    return (0);
}
