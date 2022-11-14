/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:28:09 by rnaka             #+#    #+#             */
/*   Updated: 2022/11/14 20:28:54 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int	i;

	i = 0;

	ft_printf("my = %u\n", UINT_MAX);
	printf("yu = %u\n", UINT_MAX);
	// ft_printf("%u\n", LONG_MIN);
	// printf("%u\n", LONG_MIN);
	return (0);
}