/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:32:45 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 17:01:41 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	char	*dst;
// 	char	str[] = "Hello";

// 	dst = malloc(sizeof(char) * (ft_strlen(str) + 1));
// 	ft_strlcpy(dst, str, 6);

// 	lst = ft_lstnew(dst);

// 	ft_lstdelone(lst, del);

// 	return 0;
// }