/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test81.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:47:18 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/09 21:49:07 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
    int arg = atoi(av[1]);
	int	i;
    if (arg == 0) {
        i = printf("hello from test jahduwewjfhjshqwjkwfhwqqjkdgqwiugqw whqd qwfjqd qwjfh qwfjc qwdqw jdqwg wjdh gqwdgfqgfqjwdgf jgdfg");
    } 
    else if (arg == 1) {
        i = ft_printf("hello from test jahduwewjfhjshqwjkwfhwqqjkdgqwiugqw whqd qwfjqd qwjfh qwfjc qwdqw jdqwg wjdh gqwdgfqgfqjwdgf jgdfg");
    }
	printf("%d", i);
    return (0);
}