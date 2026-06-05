/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:51:20 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/28 10:10:08 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char	s[] = "Hello World!";
// 	int	c = 'l';
// 	char	*res;	

// 	res = ft_strchr(s, c);
// 	if (res != NULL)
// 		printf("Trovato: %c\n", *res);
// 	else
// 		printf("Non trovato\n");

// 	return (0);
// }