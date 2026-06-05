/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:58:21 by marvin            #+#    #+#             */
/*   Updated: 2026/05/24 18:58:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write (fd, &c, 1);
	return ;
}

//int	main(void)
//{
//	ft_putnbr_fd(300042, 1);
//	write (1, "\n", 1);
//	ft_putnbr_fd(-42, 1);
//	write (1, "\n", 1);
//	ft_putnbr_fd(0, 1);
//	write (1, "\n", 1);
//	ft_putnbr_fd(-2147483648, 1);
//	write (1, "\n", 1);
//	return (0);
//}