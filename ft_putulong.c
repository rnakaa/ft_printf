/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:38:32 by rnaka             #+#    #+#             */
/*   Updated: 2022/11/13 19:49:49 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putulong(unsigned int n, int base, char c, int count)
{
	const char	*base10 = "0123456789";

	if (n > 9)
	{
		count += ft_putulong(n / base, base, c, count);
	}
	count += write(1, &base10[n % base], 1);
	return (count);
}
