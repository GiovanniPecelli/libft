/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 22:05:58 by marvin            #+#    #+#             */
/*   Updated: 2026/05/24 22:05:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

//int	main(void)
//{
//	char	str[] = "Hello";
//	t_list	*node;

//	node = ft_lstnew(str);
//	if (node)
//	{
//		printf("Content: %s\n", (char *)node->content);

//		if (node->next == NULL)
//			printf("Next is NULL\n");
//	}

//	return (0);
//}