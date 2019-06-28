/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:26:31 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/30 20:30:53 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	if (!f)
		return (NULL);
	head = f(lst);
	if (head == NULL)
		return (NULL);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (current->next == NULL)
		{
			free(current->next);
			return (NULL);
		}
		current = current->next;
	}
	return (head);
}
