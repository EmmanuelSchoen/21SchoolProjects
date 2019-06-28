/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:28:59 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/13 23:02:06 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*buf;

	if (!(buf = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(buf, size);
	return (buf);
}
