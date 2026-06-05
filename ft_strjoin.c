/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:37:05 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/22 17:14:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_join(char *join, char const *s1, char const *s2)
{
	size_t	index_join;
	size_t	index_s;

	index_s = 0;
	index_join = 0;
	while (s1[index_s])
	{
		join[index_join] = s1[index_s];
		index_s++;
		index_join++;
	}
	index_s = 0;
	while (s2[index_s])
	{
		join[index_join] = s2[index_s];
		index_s++;
		index_join++;
	}
	join[index_join] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	tot_len;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * (tot_len + 1));
	if (!join)
		return (NULL);
	copy_join(join, s1, s2);
	return (join);
}

//int	main(void)
//{
//	char	s1[] = "Hello ";
//	char	s2[] = "World";

//	printf("%s\n", ft_strjoin(s1, s2));
//	return (0);
//}