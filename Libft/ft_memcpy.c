/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 05:31:07 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/25 20:09:17 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src2;

	if (dst == src)
		return (dst);
	dst1 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src2[i];
		i++;
	}
	return ((void *)dst1);
}
