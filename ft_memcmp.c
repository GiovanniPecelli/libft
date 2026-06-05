/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:18:27 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/21 12:29:59 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if ((((unsigned char *)s1)[index]) != (((unsigned char *)s2)[index]))
			return ((((unsigned char *)s1)[index])
					- (((unsigned char *)s2)[index]));
		index++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "42 Roma Elis";
// 	char	s2[] = "42 Roma luiss";
// 	size_t	n = 9;
// 	int	res;

// 	res = ft_memcmp(s1, s2, n);
// 	printf("%d\n", res);
// 	return(0);
// }