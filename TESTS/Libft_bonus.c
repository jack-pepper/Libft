# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   Libft-bonus.c                                      :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: mmalie <mmalie@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:42:41 by mmalie            #+#    #+#              #
/*   Updated: 2024/11/07 08:49:31 by mmalie           ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

/* TESTS for Libft Bonus */

/* ft_lstnew */
ADD:
#include <stdio.h>

int     main(void)
{
        t_list  *node;
        t_list  *node2;

        // Case 1: str
        node = ft_lstnew("Thanks for the fish");
        printf("Content: %s - Next: %p \n", (char *)(node->content), node->next);
        free(node);

        // Case 2: int
        int     nb;
        nb = 42;
        node2 = ft_lstnew(&nb);
        printf("Content: %d - Next: %p \n", *(int *)(node2->content), node2->next);
}

OUTPUT:
Content: Thanks for the fish - Next: (nil) 
Content: 42 - Next: (nil) 

/* ft_lstadd_front */
ADD:
#include <stdio.h>

void    ft_lstadd_front(t_list **lst, t_list *new);

int     main(void)
{
        t_list *head = NULL;
        t_list *node_1;
        //t_list *node_2;
        //t_list *node_3;
        t_list *node_0;

        node_1 = ft_lstnew("Node 1");
        head = node_1;
        printf("Pointer: %p - Content: %s - Next: %p \n", head, (char *)head->content, head->next);
        //node_2 = ft_lstnew("2");
        //node_3 = ft_lstnew("3");
        //node_0 = ft_lstnew("0");
        node_0 = ft_lstnew("Node 0");
        ft_lstadd_front(&head, node_0);
        printf("Pointer: %p - Content: %s - Next: %p \n", head, (char *)head->content, head->next);
	free(node_1);
        free(node_0);
}

OUTPUT:
Pointer: 0x6462f85da2a0 - Content: Node 1 - Next: (nil) 
Pointer: 0x6462f85da6d0 - Content: Node 0 - Next: 0x6462f85da2a0

/* ft_lstsize */
ADD:
#include <stdio.h>

int     ft_lstsize(t_list *lst);

int     main(void)
{
        t_list  *head;
        t_list  *node_1;
        t_list  *node_2;
        t_list  *node_3;

        node_1 = ft_lstnew("Node 1");
        head = node_1;
        node_2 = ft_lstnew("Node 2");
        ft_lstadd_front(&head, node_2);
        node_3 = ft_lstnew("Node 3");
        ft_lstadd_front(&head, node_3);
        printf("Lstsize: %d \n", ft_lstsize(head));
}

OUTPUT:
Lstsize: 3

/* ft_lstlast */
ADD:
#include <stdio.h>

t_list  *ft_lstlast(t_list *lst);

int     main(void)
{
        t_list  *head;
        t_list  *empty_list = NULL;
        t_list  *node_1;
        t_list  *node_2;
        t_list  *node_3;
        t_list  *last_node;

        node_1 = ft_lstnew("Node 1");
        head = node_1;
        node_2 = ft_lstnew("Node 2");
        ft_lstadd_front(&head, node_2);
        node_3 = ft_lstnew("Node 3");
        ft_lstadd_front(&head, node_3);
        last_node = ft_lstlast(head);
        printf("Content: %s \n", (char *)last_node->content);
        last_node = ft_lstlast(empty_list);
        printf("Content: %p \n", last_node);
}

OUTPUT:
Content: Node 1 
Content: (nil) 

/* ft_lstadd_back */
ADD:
#include <stdio.h>
void    ft_lstadd_back(t_list **lst, t_list *new);

int     main(void)
{
        t_list  *head;
        t_list  *node_1;
        t_list  *node_2;
        t_list  *node_3;
        t_list  *last_node;

        node_1 = ft_lstnew("Node 1");
        head = node_1;
        node_2 = ft_lstnew("Node 2");
        ft_lstadd_back(&head, node_2);
        node_3 = ft_lstnew("Node 3");
        ft_lstadd_back(&head, node_3);

        last_node = head;

        while (last_node)
        {
                printf("Content: %s \n", (char *)last_node->content);
                last_node = last_node->next;
        }
}

OUTPUT:
Content: Node 1 
Content: Node 2 
Content: Node 3

/* ft_lstdelone */ NB: THE TEST DOESNT WORK!
ADD:

#include <stdio.h>

void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    free_content(void *content);

int     main(void)
{
        t_list  *head;
        t_list  *node_1;
        t_list  *node_2;
        t_list  *node_3;

        node_1 = ft_lstnew("Node 1");
        head = node_1;
        node_2 = ft_lstnew("Node 2");
        ft_lstadd_back(&head, node_2);
        node_3 = ft_lstnew("Node 3");
        ft_lstadd_back(&head, node_3);
        /*
        while (head != NULL)
        {
                printf("&: %p - Content: %s - Next: %p \n", head, (char *)head->content, head->next);
                head = head->next;
        }
        */
        t_list  *save = node_2->next;
        ft_lstdelone(node_2, free_content);

        while (head != NULL)
        {
                if (head->content != NULL)
                {
                        printf("&: %p - Content: %s - Next: %p \n", head, (char *)head->content, head->next);
                        head = head->next;
                }
                else
                {
                        printf("Deleted!");
                        head = save;
                }
        }
        ft_lstdelone(node_1, free_content);
        ft_lstdelone(node_3, free_content);
}

void    free_content(void *content)
{
        free(content);
}

/**/

/**/

/* ft_lstiter */
ADD:
#include <stdio.h>

void    ft_lstiter(t_list *lst, void (*f)(void *));
void    show_content(void *content);

int     main(void)
{
        t_list  *head;
        t_list  *node_1;
        t_list  *node_2;
        t_list  *node_3;
        t_list  *node_4;
        t_list  *node_5;

        node_1 = ft_lstnew("Node 1");
        head = node_1;
        node_2 = ft_lstnew("Node 2");
        ft_lstadd_back(&head, node_2);
        node_3 = ft_lstnew("Node 3");
        ft_lstadd_back(&head, node_3);
        node_4 = ft_lstnew("Node 4");
        ft_lstadd_back(&head, node_4);
        node_5 = ft_lstnew("Node 5");
        ft_lstadd_back(&head, node_5);

        ft_lstiter(head, show_content);
}

void    show_content(void *content)
{
        printf("&: %p - Content: %s \n", content, (char *)content);
}

OUTPUT:
&: 0x5d84d2379004 - Content: Node 1
&: 0x5d84d237900b - Content: Node 2
&: 0x5d84d2379012 - Content: Node 3
&: 0x5d84d2379019 - Content: Node 4
&: 0x5d84d2379020 - Content: Node 5

/* ft_lstmap */

