/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:54:34 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/21 15:26:28 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);
}

// int main(void)
// {
// 	void *a;
// 	void *b;

// 	a = ft_calloc(10, 0);
// 	b = calloc(10, 0);

// 	printf("%d\n", *(unsigned char *)ft_calloc(10, 0));
// 	printf("%p\n", a);
// 	printf("%p\n", b);

// 	free(a);
// 	free(b);
// 	return (0);
// }