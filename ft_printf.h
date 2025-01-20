/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:28:19 by miguel-f          #+#    #+#             */
/*   Updated: 2025/01/17 21:40:57 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libtf/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

// void	ft_putchar_fd(char c, int fd);
int			ft_printf(const char *format, ...);
#endif