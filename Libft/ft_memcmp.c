/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 06:31:34 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/17 07:17:40 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*p1;
	unsigned char		*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n)
	{
		if (*p1 != *p2)
			break ;
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
