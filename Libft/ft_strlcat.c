/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emschoen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:13:38 by emschoen          #+#    #+#             */
/*   Updated: 2019/01/16 03:57:36 by emschoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	begin;
	size_t	cntnue;
	size_t	len;

	len = ft_strlen(src) + ft_strlen(dst);
	cntnue = ft_strlen(src);
	begin = ft_strlen(dst);
	if (size > begin)
	{
		ft_strncat(dst, src, size - begin - 1);
		return (cntnue + begin);
	}
	else
	{
		return (len - (begin - size));
	}
}
