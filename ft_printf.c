/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:01:13 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/31 23:14:56 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

static int	ft_disp(char fmt, va_list *args)
{
	if (fmt == 'c')
		return (ft_putchar((int)va_arg(*args, int)));
	else if (fmt == 's')
		return (ft_putstr(va_arg(*args, const char *)));
	else if (fmt == 'p')
		return (ft_putchr(va_arg(*args, void *)));
	// else if (fmt == 'd' || fmt == 'i')
	// 	return (ft_putnbr(va_arg(*args, int)));
	// else if (fmt == 'u')
	// 	return (ft_putchr(va_arg(*args, unsigned int)));
	// else if (fmt == 'x')
	// 	return (ft_putchr(va_arg(*args, unsigned int)));
	// else if (fmt == 'X')
	// 	return (ft_putchr(va_arg(*args, unsigned int)));
	else if (fmt == '%')
		return (write(1, "%", 1));
	else
		return (-1);
	return (0);
}	

int	ft_printf(const char *fmt, ...)
{
	int		count;
	int		error;
	va_list	args;

	error = 0;
	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			error = ft_disp(*(++fmt), &args);
			if (error == -1)
				return (-1);
			fmt++;
			count += error;
		}
		else
		{
			count += write(1, (const void *)fmt, 1);
			fmt++;
		}
	}
	va_end(args);
	return (count);
}

int main()
{
	printf("\n%d = %d\n", ft_printf("1234567%%%c%s%s",'a',"","bc"), printf("\n1234567%%%c%s%s",'a',"","bc")-1);
	return 0;
}
