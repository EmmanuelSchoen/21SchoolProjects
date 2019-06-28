/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:36:31 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/19 19:52:34 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	unsigned char	*ddst;
	unsigned char	*ssrc;
	size_t			i;
	unsigned char	cc;

	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	cc = (unsigned char)c;
	i = 0;
	if (n == 0 && cc == 0)
		return (NULL);
	while (i < n && n)
	{
		ddst[i] = ssrc[i];
		if (ssrc[i] == cc)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
