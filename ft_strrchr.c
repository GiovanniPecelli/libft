/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:34:20 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/19 18:04:12 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last = (char *)&s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (last);
}

// int	main(void)
// {
// 	char	s[] = "Hello World!";
// 	int		c = 'H';
// 	char	*res;	

// 	res = ft_strrchr(s, c);
// 	if (res != NULL)
// 		printf("Trovato: %c in posizione s[%ld]\n", *res, res - s);
// 	else
// 		printf("Non trovato\n");

// 	return (0);
// }