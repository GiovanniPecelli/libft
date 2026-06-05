/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:00:09 by marvin            #+#    #+#             */
/*   Updated: 2026/05/23 17:00:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **split, size_t word)
{
	while (word--)
		free(split[word]);
	free(split);
}

static void	ft_skip_and_mark(char const *s, char c, size_t *i, size_t *start)
{
	while (s[*i] == c)
		(*i)++;
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	word;
	size_t	start;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		ft_skip_and_mark(s, c, &i, &start);
		if (start < i)
		{
			split[word] = ft_substr(s, start, i - start);
			if (!split[word])
				return (ft_free_split(split, word), NULL);
			word++;
		}
	}
	split[word] = NULL;
	return (split);
}

//int	main(void)
//{
//	char	**res;
//	int		i;

//	res = ft_split("   Hello  Roma - Elis ", ' ');
//	i = 0;
//	while (res[i])
//	{
//		printf("%s\n", res[i]);
//		i++;
//	}
//	return (0);
//}