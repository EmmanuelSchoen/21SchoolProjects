/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:50:19 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/16 02:49:37 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ddst;
	unsigned char	*ssrc;
	size_t			i;

	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	i = len;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst == src)
		return (dst);
	else
		while (i > 0)
		{
			ddst[i - 1] = ssrc[i - 1];
			i--;
		}
	return (dst);
}
