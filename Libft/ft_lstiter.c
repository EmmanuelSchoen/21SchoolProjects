/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <emschoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:04:39 by varnaud           #+#    #+#             */
/*   Updated: 2019/01/23 19:51:20 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current;

	current = lst;
	if (!lst)
		return ;
	while (current)
	{
		f(current);
		current = current->next;
	}
}
