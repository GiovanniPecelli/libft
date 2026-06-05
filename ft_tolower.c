/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:45:25 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/19 17:30:11 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	int	c = 'G';
// 	int	res;

// 	res = ft_tolower(c);
// 	printf("%c\n", res);
// 	return (0);
// }