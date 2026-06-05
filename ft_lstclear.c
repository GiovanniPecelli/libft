/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:22:41 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 13:53:33 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
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

// int main(void)
// {
// 	t_list *lst;
// 	t_list *n1;
// 	t_list *n2;
// 	t_list *n3;

// 	n1 = ft_lstnew(ft_strdup("Hello"));
// 	n2 = ft_lstnew(ft_strdup("World"));
// 	n3 = ft_lstnew(ft_strdup("!"));

// 	lst = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	printf("Before clear: ");
// 	ft_print_list(lst);
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("\nAfter clear: list is NULL\n");

// 	return 0;
// }