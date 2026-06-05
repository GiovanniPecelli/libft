/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:13:38 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 10:16:48 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new;

// 	head = NULL;
// 	new = ft_lstnew("Hello");
// 	ft_lstadd_front(&head, new);
// 	printf("%s\n", (char *)head->content);
// 	return (0);
// }