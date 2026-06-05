/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:23:14 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/19 17:30:07 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// int	main(void)
// {
// 	int	c = 'f';
// 	int	res;

// 	res = ft_toupper(c);
// 	printf("%c\n", res);
// 	return (0);
// }