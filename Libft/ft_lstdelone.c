/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <emschoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 00:19:19 by varnaud           #+#    #+#             */
/*   Updated: 2019/01/25 20:08:46 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lst;

	if (!alst || !(*alst) || !del)
		return ;
	lst = *alst;
	del(lst->content, lst->content_size);
	free(*alst);
	*alst = NULL;
}
