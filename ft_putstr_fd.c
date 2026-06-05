/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:12:29 by marvin            #+#    #+#             */
/*   Updated: 2026/05/24 18:12:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
	return ;
}

//int	main(void)
//{
//	char	s[] = "Hello World !";

//	ft_putstr_fd(NULL, 1);
//  ft_putstr_fd("OK after NULL\n", 1);
//	ft_putstr_fd(s, 2);

//	return (0);
//}