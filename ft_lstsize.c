/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:50:19 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 10:57:33 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	index;

	index = 0;
	while (lst)
	{
		lst = lst->next;
		index++;
	}
	return (index);
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

// 	lst = NULL;
// 	n1 = ft_lstnew("Hello");
// 	n2 = ft_lstnew("World");
// 	n3 = ft_lstnew("!");

// 	ft_lstadd_front(&lst, n3);
// 	ft_lstadd_front(&lst, n2);
// 	ft_lstadd_front(&lst, n1);
// 	printf("List: ");
// 	ft_print_list(lst);
// 	printf("\nList Size: %d\n", ft_lstsize(lst));
// 	return (0);
// }