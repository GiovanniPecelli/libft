/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:35:43 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/21 13:24:02 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	index;
	int	sign;
	int	nbr;

	index = 0;
	sign = 1;
	nbr = 0;
	while (nptr[index] == ' ' || (nptr[index] >= 9 && nptr[index] <= 13))
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = -sign;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		nbr = nbr * 10 + nptr[index] - 48;
		index++;
	}
	return (nbr * sign);
}

// int	main(void)
// {
// 	char	nptr[] = "   a\f\t+42jhbajb375629";

// 	printf ("%d\n", ft_atoi(nptr));
// 	printf ("%d\n", atoi(nptr));
// 	return (0);
// }