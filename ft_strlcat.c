/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:03:03 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/19 15:37:08 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	start_src;

	dst_len = 0;
	src_len = 0;
	dst_len = ft_strlen(dst);
	start_src = dst_len;
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	if (size <= dst_len)
		return (size + src_len);
	while ((src[i]) && (start_src < size - 1))
	{
		dst[start_src] = src[i];
		i++;
		start_src++;
	}
	dst[start_src] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	dst[] = "Hello World";
// 	char	src[] = "42";
// 	size_t	size = 10;

// 	ft_strlcat(dst, src, size);
// 	printf("%s\n", dst);
// 	return (0);
// }
