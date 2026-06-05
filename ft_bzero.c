/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:02:48 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/19 10:21:03 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
	return ;
}

// int	main(void)
// {
// 	char	str[] = "Hello World !";
// 	size_t	n = 4;

// 	ft_bzero(str, n);

// 	for (size_t	i = 0; i < 15; i++)
// 		printf("%d ", str[i]);

// 	printf("\n%s", str);

// 	return (0);
// }