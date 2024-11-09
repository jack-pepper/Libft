/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:00:28 by mmalie            #+#    #+#             */
/*   Updated: 2024/11/08 12:41:58 by mmalie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*node;
	t_list	*node2;

	// Case 1: str
	node = ft_lstnew("Thanks for the fish");
	printf("Content: %s - Next: %p \n", (char *)node->content, node->next);
	free(node);	

	// Case 2: int
	int	nb;
	nb = 42;
	node2 = ft_lstnew(&nb);
	printf("Content: %ls - Next: %p \n", (int *)node2->content, node2->next);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;
	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
