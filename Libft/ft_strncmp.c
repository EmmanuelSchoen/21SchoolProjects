/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 00:21:15 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/16 04:30:11 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	if (n == 0)
		return (0);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((*ss1 && (*ss1 == *ss2)) && --n)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		ss1++;
		ss2++;
	}
	return (*ss1 - *ss2);
}
