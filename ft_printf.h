/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:20:46 by rnaka             #+#    #+#             */
/*   Updated: 2022/11/13 19:50:09 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>
# include<limits.h>

int			ft_printf(const char *fmt, ...);
int			ft_putchar(char c);
int			ft_putstr(const char *str);
int			ft_putpointer(unsigned long long point);
int			ft_putnbrbase(long int n, int base, char c, int count);
int			ft_toupper(int c);
size_t		ft_strlen(const char *str);
int			ft_putulong(unsigned int n, int base, char c, int count);
#endif