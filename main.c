/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:03:37 by miguel-f          #+#    #+#             */
/*   Updated: 2025/01/27 18:05:20 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "hello";
	ft_printf("\n----- MY PRINTF TESTS -----\n\n");
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", str);
	ft_printf("Pointer: %p\n", str);
	ft_printf("Integer: %d\n", 42);
	ft_printf("Integer: %i\n", -42);
	ft_printf("Unsigned: %u\n", 42);
	ft_printf("Hex lower: %x\n", 42);
	ft_printf("Hex upper: %X\n", 42);
	ft_printf("Percent: %%\n");
	return (0);
}
