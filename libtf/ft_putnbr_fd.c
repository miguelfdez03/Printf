/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel-f <miguel-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:56:40 by miguel-f          #+#    #+#             */
/*   Updated: 2024/12/18 19:17:50 by miguel-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
	{
		num += '0';
		write(fd, &num, 1);
	}
}

/* int main(void)
{
    int numbers[] = {42, -42, 0, 12345, -12345};
    int i;

    printf("\nTesting ft_putnbr_fd:\n");
    printf("------------------\n");
    
    i = 0;
    while (i < 5)
    {
        printf("Writing number %d: ", numbers[i]);
        ft_putnbr_fd(numbers[i], 1);
        printf("\n");
        i++;
    }
    
    return (0);
} */
