/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpecelli <gpecelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 14:38:40 by gpecelli          #+#    #+#             */
/*   Updated: 2026/05/26 12:34:02 by gpecelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	ft_print_list(t_list *lst)
// {
// 	if (!lst)
// 		return ;
// 	while (lst)
// 	{
// 		printf("%s ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }

// void	*toupper_list(void *content)
// {
// 	size_t	index;
// 	char	*str;
// 	char	*new_str;

// 	index = 0;
// 	str = (char *)content;
// 	new_str = ft_strdup(str);
// 	if (!new_str)
// 		return (NULL);
// 	while (new_str[index])
// 	{
// 		if (new_str[index] >= 'a' && new_str[index] <= 'z')
// 			new_str[index] = new_str[index] - 32;
// 		index++;
// 	}
// 	return new_str; 
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*new_list;
// 	t_list	*lst;
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*n3;
// 	t_list	*n4;
// 	t_list	*n5;
// 	t_list	*n6;

// 	n1 = ft_lstnew(ft_strdup("Hello"));
// 	n2 = ft_lstnew(ft_strdup("World"));
// 	n3 = ft_lstnew(ft_strdup("and"));
// 	n4 = ft_lstnew(ft_strdup("42"));
// 	n5 = ft_lstnew(ft_strdup("Roma"));
// 	n6 = ft_lstnew(ft_strdup("Elis"));
// 	new_list = ft_lstnew(ft_strdup("canc_this"));

// 	lst = n1;
// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = n4;
// 	n4->next = n5;
// 	n5->next = n6;
// 	n6->next = NULL;

// 	printf("Before lstmap: ");
// 	ft_print_list(lst);
// 	printf("\nNew_List Before lstmap: ");
// 	ft_print_list(new_list);

// 	new_list = ft_lstmap(lst, toupper_list, del);

// 	printf("\nAfter lstmap: ");
// 	printf("\nlst is: ");
// 	ft_print_list(lst);
// 	printf("\nnew_list is: ");
// 	ft_print_list(new_list);

// 	return (0);
// }
