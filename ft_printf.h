/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:20:46 by rnaka             #+#    #+#             */
/*   Updated: 2022/11/13 14:45:40 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include"Libft/libft.h"
# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>

int			ft_printf(const char *fmt, ...);
int			ft_putchar(char c);
int			ft_putstr(const char *str);
int			ft_putpointer(unsigned long long point);
int			ft_putnbrbase(long n, int base, char c, int count);
#endif