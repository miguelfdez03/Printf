/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:31:31 by miguel-f          #+#    #+#             */
/*   Updated: 2025/01/17 21:40:51 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_char(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

static int	handle_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (str)
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	else
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
}

static int	handle_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	ft_putstr_fd("0x", 1);
	return (2 + ft_putnbr_base((unsigned long)ptr, "0123456789abcdef"));
}

int	select_case(const char *format, va_list args, int *i)
{
	int	count;
	int	num;

	count = 0;
	if (format[*i] == 'c')
		count += handle_char(args);
	else if (format[*i] == 's')
		count += handle_string(args);
	else if (format[*i] == 'p')
		count += handle_pointer(args);
	else if (format[*i] == 'd' || format[*i] == 'i')
	{
		num = va_arg(args, int);
		ft_putnbr_fd(num, 1);
		count += ft_numlen(num);
	}
	else if (format[*i] == 'u')
	{
		// Handle 'u' case
	}
	else if (format[*i] == 'x')
	{
		// Handle 'x' case
	}
	else if (format[*i] == 'X')
	{
		// Handle 'X' case
	}
	else if (format[*i] == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else
	{
		write(1, &format[*i - 1], 2);
		count += 2;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += select_case(format, args, &i);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
