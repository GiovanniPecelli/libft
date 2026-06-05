/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:23:18 by marvin            #+#    #+#             */
/*   Updated: 2026/05/20 12:23:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char	s[] = "abc\0def";
//	int		c = 'c';
//	size_t	n = 7;

//	printf("%p\n", s);
//	printf("%p\n", ft_memchr(s, c, n)); //%p for pointer
//	return (0);
//}