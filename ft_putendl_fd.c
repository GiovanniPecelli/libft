/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:33:47 by marvin            #+#    #+#             */
/*   Updated: 2026/05/24 18:33:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (!s)
		return ;
	while (s[index])
	{
		write (fd, &s[index], 1);
		index++;
	}
	write (fd, "\n", 1);
	return ;
}

//int	main(void)
//{
//	char	s[] = "Hello World !";

//	ft_putendl_fd(NULL, 1);
//	ft_putendl_fd("OK after NULL\n", 1);
//	ft_putendl_fd(s, 2);
//	return (0);
//}