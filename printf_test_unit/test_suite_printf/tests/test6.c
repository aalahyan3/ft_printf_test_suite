/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:34:58 by aalahyan          #+#    #+#             */
/*   Updated: 2024/11/01 19:28:25 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/test.h"

int main(int ac, char *av[])
{
	int arg = atoi(av[1]);
	if (arg == 0)
		printf("1\\");
	else if (arg == 1)
		ft_printf("1\\");
	return (0);
}