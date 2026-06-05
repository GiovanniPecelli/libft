/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:47:54 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/28 10:45:55 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "xyz";
// 	char	src[] = "abc";
// 	size_t	n = 2;
// 	size_t	i = 0;

// 	ft_memmove(dest, src, n);
// 	while (dest[i] != '\0')
// 	{
// 		write (1, &dest[i], 1);
// 		i++;
// 	}
// 	return (0);
// }