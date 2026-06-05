/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:03:27 by marvin            #+#    #+#             */
/*   Updated: 2026/05/24 17:03:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

// void	my_iteri(unsigned int index, char *c)
// {
// 	if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

//int	main(void)
//{
//	char	s[] = "Hello World !";

//	ft_striteri(s, my_iteri);
//	printf("%s\n", s);
//	return (0);
//}