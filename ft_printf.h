/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:20:46 by rnaka             #+#    #+#             */
/*   Updated: 2022/10/31 23:12:51 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>

int			ft_putchar(char c);
static int	ft_disp(char fmt, va_list *args);
int			ft_putstr(const char *str);
#endif