// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   test.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: rnaka <rnaka@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/10/25 19:28:09 by rnaka             #+#    #+#             */
// /*   Updated: 2022/10/31 22:43:20 by rnaka            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"
#include <stdio.h>

int main()
{
	int	i;

	i = 0;
	// printf("#c\n");
	// ft_printf("%c\t%c\n", 'c', '%');
	// printf("%c\t%c\n\n", 'c', '%');

	// printf("#str\n");
	// ft_printf("%s\t%s\t%s\n", "42Tokyo", "", NULL);
	// printf("%s\t%s\t%s\n\n", "42Tokyo", "", NULL);

	// printf("#percent\n");
	// ft_printf("%%\n");
	// printf("%%\n\n");

	// printf("#mix\n");
	// ft_printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n", 'd', "def", 1, 10,
	// 		100, 100, 100, &i);
	// printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n\n", 'd', "def", 1, 10,
	// 		100, 100, 100, &i);

	// printf("#return\n");
	// printf("%d\n", ft_printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n", 'c',
	// 			"str", 1, 10, 100, 255, 255, &i));
	// printf("%d\n", printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n", 'c',
	// 			"str", 1, 10, 100, 255, 255, &i));

	// ft_printf("%d\t%d\n", -2147483648, 0);
	// printf("%d\t%d\n\n", -2147483648, 0);
	return (0);
}