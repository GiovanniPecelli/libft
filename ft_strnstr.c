/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:44:11 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/26 10:25:48 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index_big;
	size_t	reader_little;
	size_t	first_occ_little;
	size_t	reader_big;

	index_big = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (index_big < len && (big[index_big] != '\0'))
	{
		first_occ_little = index_big;
		reader_big = index_big;
		reader_little = 0;
		while (little[reader_little] == big[reader_big]
			&& (little[reader_little] != '\0')
			&& reader_big < len)
		{
			reader_little++;
			reader_big++;
		}
		if (little[reader_little] == '\0')
			return ((char *)&big[first_occ_little]);
		index_big++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	big[] = "Hello Wor World !";
// 	char	little[] = "World";
// 	size_t	len = 15;

// 	printf("%p\n", ft_strnstr(big, little, len));
// 	return (0);
// }