/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 06:10:59 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/13 23:36:27 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	intc;

	s1 = (unsigned char *)s;
	intc = (unsigned char)c;
	while (n--)
		if (*(s1++) == intc)
			return (s1 - 1);
	return (0);
}
