/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:57:32 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/25 14:37:48 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	ft_print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	return ;
// }

// void	toupper_list(void *content)
// {
// 	char	*str;
// 	int		index;

// 	str = (char *)content;
// 	index = 0;
// 	while (str[index])
// 	{
// 		if (str[index] >= 'a' && str[index] <= 'z' && index % 2 == 0)
// 			str[index] = str[index] - 32;
// 		index++;
// 	}
// 	return ;
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*n3;

// 	n1 = ft_lstnew(ft_strdup("Hello"));
// 	n2 = ft_lstnew(ft_strdup("World"));
// 	n3 = ft_lstnew(ft_strdup("!"));

// 	lst = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;

// 	printf("Before clear: ");
// 	ft_print_list(lst);
// 	ft_lstiter(lst,toupper_list);
// 	printf("\nAfter function: ");
// 	ft_print_list(lst);

// 	return 0;
// }