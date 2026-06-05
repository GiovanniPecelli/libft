/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:32:59 by marvin            #+#    #+#             */
/*   Updated: 2026/05/23 17:32:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(long long nb)
{
	size_t	nbr_len;

	nbr_len = 0;
	if (nb <= 0)
		nbr_len++;
	while (nb != 0)
	{
		nb = nb / 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	char		*nbr;
	long long	nb;
	size_t		nbr_len;
	size_t		index_nbr;

	nb = n;
	nbr_len = ft_count_digits(nb);
	index_nbr = nbr_len;
	nbr = malloc(sizeof(char) * (nbr_len + 1));
	if (!nbr)
		return (NULL);
	nbr[index_nbr] = '\0';
	if (nb < 0)
		nb = -nb;
	while (index_nbr > 0)
	{
		nbr[--index_nbr] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}

//int	main(void)
//{
//	printf("%s\n", ft_itoa(427325478));
//	printf("%s\n", ft_itoa(0));
//	printf("%s\n", ft_itoa(-2147483648));
//	printf("%s\n", ft_itoa(-25478));
//	return (0);
//}