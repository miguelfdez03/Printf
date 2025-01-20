/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:03:37 by miguel-f          #+#    #+#             */
/*   Updated: 2025/01/17 21:15:31 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello, this is a test for case C %c\n", 'M');
	ft_printf("Hello, this is a test for case S %s \n", "Miguel");
	ft_printf("Hello, this is a test for case 'percentage' %%\n", "Miguel");
}
