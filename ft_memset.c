/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:35:36 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/19 09:40:29 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	char	c = '-';
// 	int	n = 3;
// 	ft_memset(str, c, n);
// 	printf("%s\n", str);
// 	return (0);
// }