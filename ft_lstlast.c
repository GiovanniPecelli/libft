/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:23:48 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 10:56:58 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
// 	t_list	*n3;
// 	t_list	*last;

// 	lst = NULL;
// 	n1 = ft_lstnew("Hello");
// 	n2 = ft_lstnew("World");
// 	n3 = ft_lstnew("!");

// 	ft_lstadd_front(&lst, n3);
// 	ft_lstadd_front(&lst, n2);
// 	ft_lstadd_front(&lst, n1);

// 	printf("List: ");
// 	ft_print_list(lst);
// 	last = ft_lstlast(lst);
// 	printf("\nLast of the list: %s\n", (char *)last->content);
// 	return (0);
// }