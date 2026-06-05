/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:58:28 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 11:31:53 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	return ;
}

// void	ft_print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 	printf("%s ", (char *)lst->content);
// 	lst = lst->next;
// 	}
// 	return ;
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*new;

// 	lst = NULL;
// 	n1 = ft_lstnew("Hello");
// 	n2 = ft_lstnew("World");
// 	new = ft_lstnew("42");

// 	ft_lstadd_front(&lst, n2);
// 	ft_lstadd_front(&lst, n1);

// 	printf("List:\n");
// 	ft_print_list(lst);
// 	ft_lstadd_back(&lst, new);
// 	printf("\nList with add new:\n");
// 	ft_print_list(lst);

// 	return (0);
// }