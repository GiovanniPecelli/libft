/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:13:15 by marvin            #+#    #+#             */
/*   Updated: 2026/05/22 10:13:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char char_in_s1, const char *set)
{
	size_t	index_set;

	index_set = 0;
	while (set[index_set])
	{
		if (set[index_set] == char_in_s1)
			return (1);
		index_set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	index_trim;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	index_trim = 0;
	while (start < end)
		trim[index_trim++] = s1[start++];
	trim[index_trim] = '\0';
	return (trim);
}

//int	main(void)
//{
//	char	s1[] = "-+-Hello_42---++";
//	char	set[] = "-+";

//	printf("%s\n", ft_strtrim(s1, set));
//	return (0);
//}