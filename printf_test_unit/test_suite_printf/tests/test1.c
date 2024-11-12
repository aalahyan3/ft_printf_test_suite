/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:34:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 19:37:58 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
	int arg = atoi(av[1]);
	if (arg == 0)
		printf("A  Regular string\n");
	else if (arg == 1)
		ft_printf("A  Regular string\n");
	return (0);
}