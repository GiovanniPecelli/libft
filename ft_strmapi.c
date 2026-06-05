/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:16:53 by marvin            #+#    #+#             */
/*   Updated: 2026/05/23 20:16:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index_str;
	char			*str;

	if (!s)
		return (NULL);
	index_str = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[index_str] != '\0')
	{
		str[index_str] = f(index_str, s[index_str]);
		index_str++;
	}
	str[index_str] = '\0';
	return (str);
}

// char	my_mapi(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
//{
//	char	s[] = "hello world!";
//	char	*result;

//	result = ft_strmapi(s, my_mapi);

//	printf("%s\n", result);

//	free(result);

//	return (0);
//}