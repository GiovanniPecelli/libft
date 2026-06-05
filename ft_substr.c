/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:14:39 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/21 17:33:57 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index_sub;
	size_t	index_start;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	index_sub = 0;
	index_start = start;
	while (index_sub < len)
	{
		sub[index_sub] = s[index_start];
		index_sub++;
		index_start++;
	}
	sub[index_sub] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	s[] = "Hello World!";
// 	int		start = 6;
// 	size_t	len = 7;

// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }